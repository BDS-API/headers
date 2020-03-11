#pragma once

#include "../../util/Random.h"
#include "../../../unmapped/LootTableContext.h"
#include "../../../json/Value.h"
#include "./LootItemCondition.h"


class LootItemRandomDifficultyChanceCondition : LootItemCondition {

public:
    virtual ~LootItemRandomDifficultyChanceCondition();
    virtual void applies(Random &, LootTableContext &);

    LootItemRandomDifficultyChanceCondition(Json::Value);
    void deserialize(Json::Value);
};
