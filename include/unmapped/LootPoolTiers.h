#pragma once

#include "../json/Value.h"


class LootPoolTiers {

public:

    void getRange();
    void getBonusRolls();
    void getBonusChance();
    void deserialize(Json::Value);
};
