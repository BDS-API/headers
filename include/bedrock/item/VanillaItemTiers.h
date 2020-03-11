#pragma once

#include "../../unmapped/Tier.h"


class VanillaItemTiers {

public:
    static long WOOD;
    static long STONE;
    static long IRON;
    static long DIAMOND;
    static long GOLD;


    void getTierItem(Item::Tier const&);
};
