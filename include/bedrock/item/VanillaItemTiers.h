#pragma once

#include "unmapped/Tier"


class VanillaItemTiers {

public:
    static long WOOD;
    static long STONE;
    static long IRON;
    static long DIAMOND;
    static long GOLD;


    void getTierItem(Item::Tier const&);
};
