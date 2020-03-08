#pragma once

#include "../block/unmapped/BlockSource"
#include "../actor/Actor"
#include "../level/Level"
#include "../util/BlockPos"
#include "../actor/Player"
#include "../util/Vec3"
#include "../container/Container"


class FireworksItem : Item {

public:
    static long TAG_FIREWORKS[abi:cxx11];
    static long TAG_EXPLOSIONS[abi:cxx11];
    static long TAG_E_FLIGHT[abi:cxx11];

    virtual FireworksItem::~FireworksItem()
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;
    virtual void use(ItemStack &, Player &)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    FireworksItem(std::string const&, int);
    void initFireworksRocketItem(ItemInstance &, std::vector<ItemInstance, std::allocator<ItemInstance>> const&, int);
    void initFireworksRocketItem(ItemStack &, std::vector<ItemStack, std::allocator<ItemStack>> const&, int);
};
