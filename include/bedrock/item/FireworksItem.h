#pragma once

#include <string>
#include "Item.h"
#include "../util/BlockPos.h"
#include <vector>


class FireworksItem : Item {

public:
    static std::string TAG_FIREWORKS;
    static std::string TAG_EXPLOSIONS;
    static std::string TAG_E_FLIGHT;

    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void use(ItemStack &, Player &)const;
    ~FireworksItem();
    FireworksItem(std::string const&, int);
    void initFireworksRocketItem(ItemStack &, std::vector<ItemStack> const&, int);
    void initFireworksRocketItem(ItemInstance &, std::vector<ItemInstance> const&, int);
};
