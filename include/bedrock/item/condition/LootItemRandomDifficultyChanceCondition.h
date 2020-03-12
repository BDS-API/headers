#pragma once

#include "LootItemCondition.h"
#include "../../../json/Value.h"


class LootItemRandomDifficultyChanceCondition : LootItemCondition {

public:
    virtual void applies(Random &, LootTableContext &);
    ~LootItemRandomDifficultyChanceCondition();
    LootItemRandomDifficultyChanceCondition(Json::Value);
    void deserialize(Json::Value);
};
