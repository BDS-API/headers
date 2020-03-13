#pragma once

#include "../../../json/Value.h"
#include "LootItemCondition.h"


class LootItemActorHasMarkVariantCondition : LootItemCondition {

public:
    ~LootItemActorHasMarkVariantCondition(); // _ZN36LootItemActorHasMarkVariantConditionD2Ev
    virtual void applies(Random &, LootTableContext &); // _ZN36LootItemActorHasMarkVariantCondition7appliesER6RandomR16LootTableContext
    LootItemActorHasMarkVariantCondition(int); // _ZN36LootItemActorHasMarkVariantConditionC2Ei
    void deserialize(Json::Value); // _ZN36LootItemActorHasMarkVariantCondition11deserializeEN4Json5ValueE
};
