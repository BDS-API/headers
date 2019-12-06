#pragma once

class LootItemRandomDifficultyChanceCondition : LootItemCondition {

public:
    virtual ~LootItemRandomDifficultyChanceCondition();
    virtual void applies(Random &, LootTableContext &);

    void LootItemRandomDifficultyChanceCondition(Json::Value);
    void deserialize(Json::Value);
};
