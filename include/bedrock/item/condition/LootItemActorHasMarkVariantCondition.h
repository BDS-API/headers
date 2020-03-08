#pragma once

#include "../../../unmapped/Random"
#include "../../../json/Value"


class LootItemActorHasMarkVariantCondition : LootItemCondition {

public:
    virtual LootItemActorHasMarkVariantCondition::~LootItemActorHasMarkVariantCondition();
    virtual void applies(Random &, LootTableContext &);

    LootItemActorHasMarkVariantCondition(int);
    void deserialize(Json::Value);
};
