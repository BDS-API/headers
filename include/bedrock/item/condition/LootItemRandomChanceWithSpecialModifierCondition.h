#pragma once

class LootItemRandomChanceWithSpecialModifierCondition : LootItemCondition {

public:
    virtual LootItemRandomChanceWithSpecialModifierCondition::~LootItemRandomChanceWithSpecialModifierCondition();
    virtual void applies(Random &, LootTableContext &);

    LootItemRandomChanceWithSpecialModifierCondition(float);
    void deserialize(Json::Value);
};
