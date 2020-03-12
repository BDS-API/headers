#pragma once

#include "LootItemCondition.h"
#include "../../../unmapped/LootTableContext.h"
#include "../../../json/Value.h"
#include "../../util/Random.h"


class LootItemRandomChanceWithSpecialModifierCondition : LootItemCondition {

public:
    ~LootItemRandomChanceWithSpecialModifierCondition();
    virtual void applies(Random &, LootTableContext &);
    void deserialize(Json::Value);
    LootItemRandomChanceWithSpecialModifierCondition(float);
};
