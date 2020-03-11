#pragma once

#include "../../util/Random.h"
#include "../../../unmapped/LootTableContext.h"
#include "../../../json/Value.h"
#include "./LootItemCondition.h"


class LootItemRandomChanceCondition : LootItemCondition {

public:
    virtual ~LootItemRandomChanceCondition();
    virtual void applies(Random &, LootTableContext &);

    LootItemRandomChanceCondition(float);
    void deserialize(Json::Value);
};
