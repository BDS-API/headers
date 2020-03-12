#pragma once

#include "LootItemCondition.h"
#include "../../../unmapped/LootTableContext.h"
#include "../../../json/Value.h"
#include "../../util/Random.h"


class LootItemRandomChanceWithLootingCondition : LootItemCondition {

public:
    virtual void applies(Random &, LootTableContext &);
    ~LootItemRandomChanceWithLootingCondition();
    void deserialize(Json::Value);
    LootItemRandomChanceWithLootingCondition(float, float);
};
