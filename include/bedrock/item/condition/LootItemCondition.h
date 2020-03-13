#pragma once

#include "../../../json/Value.h"


class LootItemCondition {

public:
    ~LootItemCondition(); // _ZN17LootItemConditionD2Ev
    void deserialize(Json::Value); // _ZN17LootItemCondition11deserializeEN4Json5ValueE
    LootItemCondition(); // _ZN17LootItemConditionC2Ev
};
