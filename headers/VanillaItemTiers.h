#pragma once

class VanillaItemTiers {

public:
    static long VanillaItemTiers::WOOD;
    static long VanillaItemTiers::STONE;
    static long VanillaItemTiers::IRON;
    static long VanillaItemTiers::DIAMOND;
    static long VanillaItemTiers::GOLD;


    void getTierItem(Item::Tier const&);
};
