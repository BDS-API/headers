#pragma once

class LootItemRandomChanceWithSpecialModifierCondition : LootItemCondition {

public:
    virtual ~LootItemRandomChanceWithSpecialModifierCondition();
    virtual void applies(Random &, LootTableContext &);

    void LootItemRandomChanceWithSpecialModifierCondition(float);
    void deserialize(Json::Value);
};
