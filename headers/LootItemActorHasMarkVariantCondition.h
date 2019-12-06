#pragma once

class LootItemActorHasMarkVariantCondition : LootItemCondition {

public:
    virtual ~LootItemActorHasMarkVariantCondition();
    virtual void applies(Random &, LootTableContext &);

    void LootItemActorHasMarkVariantCondition(int);
    void deserialize(Json::Value);
};
