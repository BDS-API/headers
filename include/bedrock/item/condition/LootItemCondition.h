#pragma once

#include "../../../json/Value.h"


class LootItemCondition {

public:
    virtual ~LootItemCondition();

    void deserialize(Json::Value);
    LootItemCondition();
};
