#pragma once

#include "../../../json/Value.h"


class LootItemCondition {

public:
    ~LootItemCondition();
    LootItemCondition();
    void deserialize(Json::Value);
};
