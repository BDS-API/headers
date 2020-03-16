#pragma once

#include "../../../json/Value.h"


class LootItemCondition {

public:
    virtual ~LootItemCondition(); // _ZN17LootItemConditionD2Ev
    virtual void __fake_function0(); // fake
    void deserialize(Json::Value); // _ZN17LootItemCondition11deserializeEN4Json5ValueE
    LootItemCondition(); // _ZN17LootItemConditionC2Ev
};
