#pragma once

#include "../../../json/Value"
#include "../../../unmapped/LootTableContext"
#include "../../util/Random"


class LootItemRandomChanceWithLootingCondition : LootItemCondition {

public:
    LootItemRandomChanceWithLootingCondition::~LootItemRandomChanceWithLootingCondition()
    virtual void applies(Random &, LootTableContext &);

    LootItemRandomChanceWithLootingCondition(float, float);
    void deserialize(Json::Value);
};
