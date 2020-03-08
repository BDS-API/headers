#pragma once

#include "../../util/Random"
#include "../../../unmapped/LootTableContext"
#include "../../../json/Value"


class LootItemActorHasMarkVariantCondition : LootItemCondition {

public:
    virtual LootItemActorHasMarkVariantCondition::~LootItemActorHasMarkVariantCondition()
    virtual void applies(Random &, LootTableContext &);

    LootItemActorHasMarkVariantCondition(int);
    void deserialize(Json::Value);
};
