#pragma once

#include "../../../json/Value.h"
#include "LootItemCondition.h"


class LootItemRandomDifficultyChanceCondition : public LootItemCondition {

public:
    virtual ~LootItemRandomDifficultyChanceCondition(); // _ZN39LootItemRandomDifficultyChanceConditionD2Ev
    virtual void __fake_function0(); // fake
    virtual void applies(Random &, LootTableContext &); // _ZN39LootItemRandomDifficultyChanceCondition7appliesER6RandomR16LootTableContext
    LootItemRandomDifficultyChanceCondition(Json::Value); // _ZN39LootItemRandomDifficultyChanceConditionC2EN4Json5ValueE
    void deserialize(Json::Value); // _ZN39LootItemRandomDifficultyChanceCondition11deserializeEN4Json5ValueE
};
