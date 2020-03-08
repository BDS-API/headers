#pragma once

#include "../../../unmapped/Random"
#include "../../../json/Value"


class LootItemRandomChanceWithSpecialModifierCondition : LootItemCondition {

public:
    virtual LootItemRandomChanceWithSpecialModifierCondition::~LootItemRandomChanceWithSpecialModifierCondition();
    virtual void applies(Random &, LootTableContext &);

    LootItemRandomChanceWithSpecialModifierCondition(float);
    void deserialize(Json::Value);
};
