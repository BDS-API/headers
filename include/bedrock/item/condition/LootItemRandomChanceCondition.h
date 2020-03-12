#pragma once

#include "LootItemCondition.h"
#include "../../../json/Value.h"


class LootItemRandomChanceCondition : LootItemCondition {

public:
    virtual void applies(Random &, LootTableContext &);
    ~LootItemRandomChanceCondition();
    void deserialize(Json::Value);
    LootItemRandomChanceCondition(float);
};
