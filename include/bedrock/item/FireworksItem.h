#pragma once

#include "../block/unmapped/BlockSource.h"
#include "./ItemStackBase.h"
#include <memory>
#include "./ItemInstance.h"
#include "../util/BlockPos.h"
#include "../container/Container.h"
#include "./Item.h"
#include "../level/Level.h"
#include "../actor/Actor.h"
#include <vector>
#include "../util/Vec3.h"
#include "../actor/Player.h"
#include "./ItemStack.h"
#include <string>


class FireworksItem : Item {

public:
    static std::string TAG_FIREWORKS;
    static std::string TAG_EXPLOSIONS;
    static std::string TAG_E_FLIGHT;

    virtual ~FireworksItem();
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;
    virtual void use(ItemStack &, Player &)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    FireworksItem(std::string const&, int);
    void initFireworksRocketItem(ItemInstance &, std::vector<ItemInstance, std::allocator<ItemInstance>> const&, int);
    void initFireworksRocketItem(ItemStack &, std::vector<ItemStack, std::allocator<ItemStack>> const&, int);
};
