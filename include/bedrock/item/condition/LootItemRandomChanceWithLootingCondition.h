#pragma once

#include "../../util/Random.h"
#include "../../../unmapped/LootTableContext.h"
#include "../../../json/Value.h"
#include "./LootItemCondition.h"


class LootItemRandomChanceWithLootingCondition : LootItemCondition {

public:
    virtual ~LootItemRandomChanceWithLootingCondition();
    virtual void applies(Random &, LootTableContext &);

    LootItemRandomChanceWithLootingCondition(float, float);
    void deserialize(Json::Value);
};
