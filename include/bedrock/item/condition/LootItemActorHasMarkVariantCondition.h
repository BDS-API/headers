#pragma once

#include "../../util/Random.h"
#include "../../../unmapped/LootTableContext.h"
#include "../../../json/Value.h"
#include "./LootItemCondition.h"


class LootItemActorHasMarkVariantCondition : LootItemCondition {

public:
    virtual ~LootItemActorHasMarkVariantCondition();
    virtual void applies(Random &, LootTableContext &);

    LootItemActorHasMarkVariantCondition(int);
    void deserialize(Json::Value);
};
