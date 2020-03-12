#pragma once

#include "../json/Value.h"


namespace LootPoolTiers {

    void deserialize(Json::Value);
    void getBonusRolls();
    void getRange();
    void getBonusChance();
};
