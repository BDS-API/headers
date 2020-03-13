#pragma once

#include "../../../json/Value.h"
#include "LootItemCondition.h"


class LootItemRandomChanceCondition : LootItemCondition {

public:
    ~LootItemRandomChanceCondition(); // _ZN29LootItemRandomChanceConditionD2Ev
    virtual void applies(Random &, LootTableContext &); // _ZN29LootItemRandomChanceCondition7appliesER6RandomR16LootTableContext
    LootItemRandomChanceCondition(float); // _ZN29LootItemRandomChanceConditionC2Ef
    void deserialize(Json::Value); // _ZN29LootItemRandomChanceCondition11deserializeEN4Json5ValueE
};
