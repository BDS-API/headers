#pragma once

#include "../../util/Random.h"
#include "../../../unmapped/LootTableContext.h"
#include "../../../json/Value.h"
#include "./LootItemCondition.h"


class LootItemRandomChanceWithSpecialModifierCondition : LootItemCondition {

public:
    virtual ~LootItemRandomChanceWithSpecialModifierCondition();
    virtual void applies(Random &, LootTableContext &);

    LootItemRandomChanceWithSpecialModifierCondition(float);
    void deserialize(Json::Value);
};
