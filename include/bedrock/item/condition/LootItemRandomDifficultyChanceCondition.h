#pragma once

#include "../../util/Random"
#include "../../../json/Value"
#include "../../../unmapped/LootTableContext"


class LootItemRandomDifficultyChanceCondition : LootItemCondition {

public:
    virtual LootItemRandomDifficultyChanceCondition::~LootItemRandomDifficultyChanceCondition()
    virtual void applies(Random &, LootTableContext &);

    LootItemRandomDifficultyChanceCondition(Json::Value);
    void deserialize(Json::Value);
};
