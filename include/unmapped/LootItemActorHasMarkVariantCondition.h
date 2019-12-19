#pragma once

class LootItemActorHasMarkVariantCondition : LootItemCondition {

public:
    virtual LootItemActorHasMarkVariantCondition::~LootItemActorHasMarkVariantCondition();
    virtual void applies(Random &, LootTableContext &);

    LootItemActorHasMarkVariantCondition(int);
    void deserialize(Json::Value);
};
