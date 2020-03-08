#pragma once

#include "../../../json/Value"
#include "../../../unmapped/LootTableContext"
#include "../../util/Random"


class LootItemRandomChanceWithSpecialModifierCondition : LootItemCondition {

public:
    LootItemRandomChanceWithSpecialModifierCondition::~LootItemRandomChanceWithSpecialModifierCondition()
    virtual void applies(Random &, LootTableContext &);

    LootItemRandomChanceWithSpecialModifierCondition(float);
    void deserialize(Json::Value);
};
