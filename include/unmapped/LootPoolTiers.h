#pragma once

#include "../json/Value.h"


namespace LootPoolTiers {

    void getRange(); // _ZN13LootPoolTiers8getRangeEv
    void getBonusRolls(); // _ZN13LootPoolTiers13getBonusRollsEv
    void getBonusChance(); // _ZN13LootPoolTiers14getBonusChanceEv
    void deserialize(Json::Value); // _ZN13LootPoolTiers11deserializeEN4Json5ValueE
};
