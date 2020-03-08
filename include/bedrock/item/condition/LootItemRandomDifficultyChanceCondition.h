#pragma once

#include "../../../unmapped/LootTableContext"
#include "../../../json/Value"
#include "../../util/Random"


class LootItemRandomDifficultyChanceCondition : LootItemCondition {

public:
    LootItemRandomDifficultyChanceCondition::~LootItemRandomDifficultyChanceCondition()
    virtual void applies(Random &, LootTableContext &);

    LootItemRandomDifficultyChanceCondition(Json::Value);
    void deserialize(Json::Value);
};
