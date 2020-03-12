#pragma once

#include "LootItemCondition.h"
#include "../../../json/Value.h"


class LootItemActorHasMarkVariantCondition : LootItemCondition {

public:
    ~LootItemActorHasMarkVariantCondition();
    virtual void applies(Random &, LootTableContext &);
    LootItemActorHasMarkVariantCondition(int);
    void deserialize(Json::Value);
};
