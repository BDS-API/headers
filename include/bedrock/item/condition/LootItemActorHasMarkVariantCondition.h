#pragma once

#include "LootItemCondition.h"
#include "../../../unmapped/LootTableContext.h"
#include "../../../json/Value.h"
#include "../../util/Random.h"


class LootItemActorHasMarkVariantCondition : LootItemCondition {

public:
    virtual void applies(Random &, LootTableContext &);
    ~LootItemActorHasMarkVariantCondition();
    LootItemActorHasMarkVariantCondition(int);
    void deserialize(Json::Value);
};
