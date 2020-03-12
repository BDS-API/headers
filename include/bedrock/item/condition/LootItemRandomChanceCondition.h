#pragma once

#include "LootItemCondition.h"
#include "../../../unmapped/LootTableContext.h"
#include "../../../json/Value.h"
#include "../../util/Random.h"


class LootItemRandomChanceCondition : LootItemCondition {

public:
    ~LootItemRandomChanceCondition();
    virtual void applies(Random &, LootTableContext &);
    LootItemRandomChanceCondition(float);
    void deserialize(Json::Value);
};
