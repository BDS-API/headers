#pragma once

#include "../../../json/Value"


class LootItemCondition {

public:
    virtual LootItemCondition::~LootItemCondition()

    void deserialize(Json::Value);
    LootItemCondition(void);
};
