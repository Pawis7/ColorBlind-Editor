#include <Geode/modify/EffectGameObject.hpp>

using namespace geode::prelude;

std::unordered_map<std::int, std::string> portalIDToFrameNameNumber = {
	// +14 extra_001 +13 extra_2_001
	{10, "01"},
	{11, "02"},
	{2926, "19"},
	// +11 extra_001 +10 extra_2_001
	{12, "03"},
	{13, "04"},
	{47, "07"},
	{111, "10"},
	{660, "13"},
	{745, "14"},
	{1331, "17"},
	{1933, "18"}
};

/*

break;
*/

class $modify(MyEffectGameObject, EffectGameObject) {
	void customSetup() {
		EffectGameObject::customSetup();
		if (PlayLayer::get()) return; // Verficamos si estamos en el editor o fuera (solo para que funcione dentro del editor)
		if (!portalIDToFrameNameNumber.contains(m_objectID)) return;
		const std::string& frameNameNumber = portalIDToFrameNameNumber.find(m_objectID)->second;
		const int& offset = (m_objectID == 10 || m_objectID == 11 || m_objectID == 2926) ? 14 : 11;
		if (CCSprite* extra1 = CCSprite::createWithSpriteFrameName(fmt::format("portal_{}_extra_001.png", frameNameNumber).c_str())) {
			extra1->setAnchorPoint({0.5f, 0.5f});
			extra1->setPosition({this->getContentSize() / 2});
			extra1->setPositionX(extra1->getPositionX() + offset);
			this->addChild(extra1, 2);
		} else log::info("No se encontró portal_{}_extra_001.png", frameNameNumber);
		if (CCSprite* extra2 = CCSprite::createWithSpriteFrameName(fmt::format("portal_{}_extra_2_001.png", frameNameNumber).c_str()) {
			extra2->setAnchorPoint({0.5f, 0.5f});
			extra2->setPosition({this->getContentSize() / 2});
			extra2->setPositionX(extra1->getPositionX() + offset - 1);
			this->addChild(extra2, 3);
		} else log::info("No se encontró portal_{}_extra_2_001.png", frameNameNumber);
		this->setCascadeColorEnabled(true);
		this->setCascadeOpacityEnabled(true);
	}
};

