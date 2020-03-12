#pragma once

#include "LootItemCondition.h"
#include "../../../json/Value.h"


class LootItemRandomChanceWithLootingCondition : LootItemCondition {

public:
    virtual void applies(Random &, LootTableContext &);
    ~LootItemRandomChanceWithLootingCondition();
    LootItemRandomChanceWithLootingCondition(float, float);
    void deserialize(Json::Value);
};
