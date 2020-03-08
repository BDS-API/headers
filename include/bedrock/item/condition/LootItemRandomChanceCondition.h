#pragma once

#include "../../../json/Value"
#include "../../../unmapped/LootTableContext"
#include "../../util/Random"


class LootItemRandomChanceCondition : LootItemCondition {

public:
    LootItemRandomChanceCondition::~LootItemRandomChanceCondition()
    virtual void applies(Random &, LootTableContext &);

    LootItemRandomChanceCondition(float);
    void deserialize(Json::Value);
};
