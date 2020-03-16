#pragma once

#include "../../../json/Value.h"
#include "LootItemCondition.h"


class LootItemRandomChanceWithLootingCondition : public LootItemCondition {

public:
    virtual ~LootItemRandomChanceWithLootingCondition(); // _ZN40LootItemRandomChanceWithLootingConditionD2Ev
    virtual void __fake_function0(); // fake
    virtual void applies(Random &, LootTableContext &); // _ZN40LootItemRandomChanceWithLootingCondition7appliesER6RandomR16LootTableContext
    LootItemRandomChanceWithLootingCondition(float, float); // _ZN40LootItemRandomChanceWithLootingConditionC2Eff
    void deserialize(Json::Value); // _ZN40LootItemRandomChanceWithLootingCondition11deserializeEN4Json5ValueE
};
