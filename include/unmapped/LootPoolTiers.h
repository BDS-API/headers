#pragma once

#include "../json/Value"


class LootPoolTiers {

public:

    void getRange(void);
    void getBonusRolls(void);
    void getBonusChance(void);
    void deserialize(Json::Value);
};
