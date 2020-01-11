#pragma once

class LootItemRandomChanceCondition : LootItemCondition {

public:
    virtual LootItemRandomChanceCondition::~LootItemRandomChanceCondition();
    virtual void applies(Random &, LootTableContext &);

    LootItemRandomChanceCondition(float);
    void deserialize(Json::Value);
};