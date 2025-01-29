#include <Geode/modify/EffectGameObject.hpp>

using namespace geode::prelude;

std::unordered_map<int, std::string> portalIDToFrameNameNumber = {
    // +14 extra_001 +13 extra_2_001 (Gravity portals)
	{10, "01"}, {11, "02"}, {2926, "19"},

    // +11 extra_001 +10 extra_2_001 (else portals)
	{12, "03"}, 
	{13, "04"}, 
	{47, "07"},
    {111, "10"}, 
	{660, "13"}, 
	{745, "14"},
    {1331, "17"}, 
	{1933, "18"}
};

// Función auxiliar para agregar sprites extra
void addPortalExtraSprite(EffectGameObject* obj, const std::string& frameName, int offset, int zOrder, int offsetAdjust = 0) {
    //first {Portal Sprite ID} second {Second Sprite (Portal indicator or extra portal tab)}
	if (auto sprite = CCSprite::createWithSpriteFrameName(fmt::format("portal_{}_extra_{}.png", frameName, offsetAdjust ? "2_001" : "001").c_str())) {
        // Ajustar posicion
		sprite->setAnchorPoint({0.5f, 0.5f});
        sprite->setPosition(obj->getContentSize() / 2);
        sprite->setPositionX(sprite->getPositionX() + offset - offsetAdjust);
        obj->addChild(sprite, zOrder);
    } else {
        log::info("No se encontró portal_{}_extra_{}.png", frameName, offsetAdjust ? "2_001" : "001");
    }
}

class $modify(MyEffectGameObject, EffectGameObject) {
    void customSetup() {
        EffectGameObject::customSetup();
        if (PlayLayer::get()) return; // editor check

        auto it = portalIDToFrameNameNumber.find(m_objectID);
        if (it == portalIDToFrameNameNumber.end()) return;

        int offset = (m_objectID == 10 || m_objectID == 11 || m_objectID == 2926) ? 14 : 11;
        addPortalExtraSprite(this, it->second, offset, 2);
        addPortalExtraSprite(this, it->second, offset, 3, 1);
		
        setCascadeColorEnabled(true);
        setCascadeOpacityEnabled(true);
    }
};
