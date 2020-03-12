#pragma once

#include "../../../json/Value.h"


class LootItemCondition {

public:
    ~LootItemCondition();
    void deserialize(Json::Value);
    LootItemCondition();
};
