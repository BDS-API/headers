#pragma once

#include "LootItemCondition.h"
#include "../../../json/Value.h"


class LootItemRandomChanceWithSpecialModifierCondition : LootItemCondition {

public:
    ~LootItemRandomChanceWithSpecialModifierCondition();
    virtual void applies(Random &, LootTableContext &);
    LootItemRandomChanceWithSpecialModifierCondition(float);
    void deserialize(Json::Value);
};
