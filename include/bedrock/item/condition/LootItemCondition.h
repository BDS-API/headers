#pragma once

#include "../../../json/Value"


class LootItemCondition {

public:
    LootItemCondition::~LootItemCondition()

    void deserialize(Json::Value);
    LootItemCondition(void);
};
