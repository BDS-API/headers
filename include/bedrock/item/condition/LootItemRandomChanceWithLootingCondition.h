#pragma once

#include "../../../unmapped/Random"
#include "../../../json/Value"


class LootItemRandomChanceWithLootingCondition : LootItemCondition {

public:
    virtual LootItemRandomChanceWithLootingCondition::~LootItemRandomChanceWithLootingCondition();
    virtual void applies(Random &, LootTableContext &);

    LootItemRandomChanceWithLootingCondition(float, float);
    void deserialize(Json::Value);
};
