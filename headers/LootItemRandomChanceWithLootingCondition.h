#pragma once

class LootItemRandomChanceWithLootingCondition : LootItemCondition {

public:
    virtual ~LootItemRandomChanceWithLootingCondition();
    virtual void applies(Random &, LootTableContext &);

    void LootItemRandomChanceWithLootingCondition(float, float);
    void deserialize(Json::Value);
};
