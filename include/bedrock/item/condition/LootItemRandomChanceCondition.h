#pragma once

#include "../../../json/Value.h"
#include "LootItemCondition.h"


class LootItemRandomChanceCondition : public LootItemCondition {

public:
    virtual ~LootItemRandomChanceCondition(); // _ZN29LootItemRandomChanceConditionD2Ev
    virtual void __fake_function0(); // fake
    virtual void applies(Random &, LootTableContext &); // _ZN29LootItemRandomChanceCondition7appliesER6RandomR16LootTableContext
    LootItemRandomChanceCondition(float); // _ZN29LootItemRandomChanceConditionC2Ef
    void deserialize(Json::Value); // _ZN29LootItemRandomChanceCondition11deserializeEN4Json5ValueE
};
