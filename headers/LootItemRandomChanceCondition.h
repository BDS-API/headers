#pragma once

class LootItemRandomChanceCondition : LootItemCondition {

public:
    virtual ~LootItemRandomChanceCondition();
    virtual void applies(Random &, LootTableContext &);

    void LootItemRandomChanceCondition(float);
    void deserialize(Json::Value);
};
