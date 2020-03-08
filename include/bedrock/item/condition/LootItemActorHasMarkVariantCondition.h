#pragma once

#include "../../../json/Value"
#include "../../../unmapped/LootTableContext"
#include "../../util/Random"


class LootItemActorHasMarkVariantCondition : LootItemCondition {

public:
    LootItemActorHasMarkVariantCondition::~LootItemActorHasMarkVariantCondition()
    virtual void applies(Random &, LootTableContext &);

    LootItemActorHasMarkVariantCondition(int);
    void deserialize(Json::Value);
};
