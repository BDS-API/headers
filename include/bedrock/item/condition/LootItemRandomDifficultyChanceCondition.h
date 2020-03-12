#pragma once

#include "LootItemCondition.h"
#include "../../../unmapped/LootTableContext.h"
#include "../../../json/Value.h"
#include "../../util/Random.h"


class LootItemRandomDifficultyChanceCondition : LootItemCondition {

public:
    ~LootItemRandomDifficultyChanceCondition();
    virtual void applies(Random &, LootTableContext &);
    LootItemRandomDifficultyChanceCondition(Json::Value);
    void deserialize(Json::Value);
};
