#include <Geode/Geode.hpp>
#include <Geode/modify/EffectGameObject.hpp>
#include <Geode/utils/cocos.hpp>
#include <Geode/binding/GameManager.hpp>

using namespace geode::prelude;


class $modify(MyEffectGameObject, EffectGameObject) {
	void customSetup() {
		EffectGameObject::customSetup();

		// Verficamos si estamos en el editor o fuera (solo para que funcione dentro del editor)
		if (GameManager::sharedState()->m_playLayer == nullptr) {

			switch (m_objectID) {
				case 10: {
					//sobrepone el icono colorblind
					if (CCSprite* extra1 = CCSprite::createWithSpriteFrameName("portal_01_extra_001.png")) {
						extra1->setAnchorPoint({0.5f, 0.5f});
						extra1->setPosition({getContentSize().width / 2 + 14, getContentSize().height / 2});
						addChild(extra1, 2);
					} else {
						log::info("No se encontró portal_04_extra_001.png");
					}
					//sobrepone el borde colorblind (los portales de cambio de gravedad son mas delgado usan un axis distnto a los demas)
					if (CCSprite* extra2 = CCSprite::createWithSpriteFrameName("portal_01_extra_2_001.png")) {
						extra2->setAnchorPoint({0.5f, 0.5f});
						extra2->setPosition({getContentSize().width / 2 + 13, getContentSize().height / 2});
						addChild(extra2, 3);
					} else {
						log::info("No se encontró portal_04_extra_2_001.png");
					}
					setCascadeColorEnabled(true);
					setCascadeOpacityEnabled(true);
					break;
				}
				case 11: {
					if (CCSprite* extra1 = CCSprite::createWithSpriteFrameName("portal_02_extra_001.png")) {
						extra1->setAnchorPoint({0.5f, 0.5f});
						extra1->setPosition({getContentSize().width / 2 + 14, getContentSize().height / 2});
						addChild(extra1, 2);
					} else {
						log::info("No se encontró portal_04_extra_001.png");
					}
					if (CCSprite* extra2 = CCSprite::createWithSpriteFrameName("portal_02_extra_2_001.png")) {
						extra2->setAnchorPoint({0.5f, 0.5f});
						extra2->setPosition({getContentSize().width / 2 + 13, getContentSize().height / 2});
						addChild(extra2, 3);
					} else {
						log::info("No se encontró portal_04_extra_2_001.png");
					}
					setCascadeColorEnabled(true);
					setCascadeOpacityEnabled(true);
					break;
				}
				case 2926: {
					if (CCSprite* extra1 = CCSprite::createWithSpriteFrameName("portal_19_extra_001.png")) {
						extra1->setAnchorPoint({0.5f, 0.5f});
						extra1->setPosition({getContentSize().width / 2 + 14, getContentSize().height / 2});
						addChild(extra1, 2);
					} else {
						log::info("No se encontró portal_04_extra_001.png");
					}
					if (CCSprite* extra2 = CCSprite::createWithSpriteFrameName("portal_19_extra_2_001.png")) {
						extra2->setAnchorPoint({0.5f, 0.5f});
						extra2->setPosition({getContentSize().width / 2 + 13, getContentSize().height / 2});
						addChild(extra2, 3);
					} else {
						log::info("No se encontró portal_04_extra_2_001.png");
					}
					setCascadeColorEnabled(true);
					setCascadeOpacityEnabled(true);
					break;
				}
				case 12: {
					if (CCSprite* extra1 = CCSprite::createWithSpriteFrameName("portal_03_extra_001.png")) {
						extra1->setAnchorPoint({0.5f, 0.5f});
						extra1->setPosition({getContentSize().width / 2 + 11, getContentSize().height / 2});
						addChild(extra1, 2);
					} else {
						log::info("No se encontró portal_04_extra_001.png");
					}
					if (CCSprite* extra2 = CCSprite::createWithSpriteFrameName("portal_03_extra_2_001.png")) {
						extra2->setAnchorPoint({0.5f, 0.5f});
						extra2->setPosition({getContentSize().width / 2 + 10, getContentSize().height / 2});
						addChild(extra2, 3);
					} else {
						log::info("No se encontró portal_04_extra_2_001.png");
					}
					setCascadeColorEnabled(true);
					setCascadeOpacityEnabled(true);
					break;
				}
				case 13: {
					if (CCSprite* extra1 = CCSprite::createWithSpriteFrameName("portal_04_extra_001.png")) {
						extra1->setAnchorPoint({0.5f, 0.5f});
						extra1->setPosition({getContentSize().width / 2 + 11, getContentSize().height / 2});
						addChild(extra1, 2);
					} else {
						log::info("No se encontró portal_04_extra_001.png");
					}
					if (CCSprite* extra2 = CCSprite::createWithSpriteFrameName("portal_04_extra_2_001.png")) {
						extra2->setAnchorPoint({0.5f, 0.5f});
						extra2->setPosition({getContentSize().width / 2 + 10, getContentSize().height / 2});
						addChild(extra2, 3);
					} else {
						log::info("No se encontró portal_04_extra_2_001.png");
					}
					setCascadeColorEnabled(true);
					setCascadeOpacityEnabled(true);
					break;
				}
				case 47: {
					if (CCSprite* extra1 = CCSprite::createWithSpriteFrameName("portal_07_extra_001.png")) {
						extra1->setAnchorPoint({0.5f, 0.5f});
						extra1->setPosition({getContentSize().width / 2 + 11, getContentSize().height / 2});
						addChild(extra1, 2);
					} else {
						log::info("No se encontró portal_04_extra_001.png");
					}
					if (CCSprite* extra2 = CCSprite::createWithSpriteFrameName("portal_07_extra_2_001.png")) {
						extra2->setAnchorPoint({0.5f, 0.5f});
						extra2->setPosition({getContentSize().width / 2 + 10, getContentSize().height / 2});
						addChild(extra2, 3);
					} else {
						log::info("No se encontró portal_04_extra_2_001.png");
					}
					setCascadeColorEnabled(true);
					setCascadeOpacityEnabled(true);
					break;
				}
				case 111: {
					if (CCSprite* extra1 = CCSprite::createWithSpriteFrameName("portal_10_extra_001.png")) {
						extra1->setAnchorPoint({0.5f, 0.5f});
						extra1->setPosition({getContentSize().width / 2 + 11, getContentSize().height / 2});
						addChild(extra1, 2);
					} else {
						log::info("No se encontró portal_04_extra_001.png");
					}
					if (CCSprite* extra2 = CCSprite::createWithSpriteFrameName("portal_10_extra_2_001.png")) {
						extra2->setAnchorPoint({0.5f, 0.5f});
						extra2->setPosition({getContentSize().width / 2 + 10, getContentSize().height / 2});
						addChild(extra2, 3);
					} else {
						log::info("No se encontró portal_04_extra_2_001.png");
					}
					setCascadeColorEnabled(true);
					setCascadeOpacityEnabled(true);
					break;
				}
				case 660: {
					if (CCSprite* extra1 = CCSprite::createWithSpriteFrameName("portal_13_extra_001.png")) {
						extra1->setAnchorPoint({0.5f, 0.5f});
						extra1->setPosition({getContentSize().width / 2 + 11, getContentSize().height / 2});
						addChild(extra1, 2);
					} else {
						log::info("No se encontró portal_04_extra_001.png");
					}
					if (CCSprite* extra2 = CCSprite::createWithSpriteFrameName("portal_13_extra_2_001.png")) {
						extra2->setAnchorPoint({0.5f, 0.5f});
						extra2->setPosition({getContentSize().width / 2 + 10, getContentSize().height / 2});
						addChild(extra2, 3);
					} else {
						log::info("No se encontró portal_04_extra_2_001.png");
					}
					setCascadeColorEnabled(true);
					setCascadeOpacityEnabled(true);
					break;
				}
				case 745: {
					if (CCSprite* extra1 = CCSprite::createWithSpriteFrameName("portal_14_extra_001.png")) {
						extra1->setAnchorPoint({0.5f, 0.5f});
						extra1->setPosition({getContentSize().width / 2 + 11, getContentSize().height / 2});
						addChild(extra1, 2);
					} else {
						log::info("No se encontró portal_04_extra_001.png");
					}
					if (CCSprite* extra2 = CCSprite::createWithSpriteFrameName("portal_14_extra_2_001.png")) {
						extra2->setAnchorPoint({0.5f, 0.5f});
						extra2->setPosition({getContentSize().width / 2 + 10, getContentSize().height / 2});
						addChild(extra2, 3);
					} else {
						log::info("No se encontró portal_04_extra_2_001.png");
					}
					setCascadeColorEnabled(true);
					setCascadeOpacityEnabled(true);
					break;
				}
				case 1331: {
					if (CCSprite* extra1 = CCSprite::createWithSpriteFrameName("portal_17_extra_001.png")) {
						extra1->setAnchorPoint({0.5f, 0.5f});
						extra1->setPosition({getContentSize().width / 2 + 11, getContentSize().height / 2});
						addChild(extra1, 2);
					} else {
						log::info("No se encontró portal_04_extra_001.png");
					}
					if (CCSprite* extra2 = CCSprite::createWithSpriteFrameName("portal_17_extra_2_001.png")) {
						extra2->setAnchorPoint({0.5f, 0.5f});
						extra2->setPosition({getContentSize().width / 2 + 10, getContentSize().height / 2});
						addChild(extra2, 3);
					} else {
						log::info("No se encontró portal_04_extra_2_001.png");
					}
					setCascadeColorEnabled(true);
					setCascadeOpacityEnabled(true);
					break;
				}
				case 1933: {
					if (CCSprite* extra1 = CCSprite::createWithSpriteFrameName("portal_18_extra_001.png")) {
						extra1->setAnchorPoint({0.5f, 0.5f});
						extra1->setPosition({getContentSize().width / 2 + 11, getContentSize().height / 2});
						addChild(extra1, 2);
					} else {
						log::info("No se encontró portal_04_extra_001.png");
					}
					if (CCSprite* extra2 = CCSprite::createWithSpriteFrameName("portal_18_extra_2_001.png")) {
						extra2->setAnchorPoint({0.5f, 0.5f});
						extra2->setPosition({getContentSize().width / 2 + 10, getContentSize().height / 2});
						addChild(extra2, 3);
					} else {
						log::info("No se encontró portal_04_extra_2_001.png");
					}
					setCascadeColorEnabled(true);
					setCascadeOpacityEnabled(true);
					break;
				}
				default: {
					log::info("No se ha definido lógica para este objeto.");
					break;
				}
			}
		}
	}
};

