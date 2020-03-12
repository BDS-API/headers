#pragma once

#include "Item.h"
#include "../util/BlockPos.h"
#include "ItemStack.h"
#include <string>
#include "../actor/Actor.h"
#include "../util/Vec3.h"
#include <vector>
#include "../container/Container.h"
#include "../actor/Player.h"
#include "ItemInstance.h"
#include "../level/Level.h"
#include "ItemStackBase.h"
#include "../block/unmapped/BlockSource.h"


class FireworksItem : Item {

public:
    static std::string TAG_FIREWORKS;
    static std::string TAG_EXPLOSIONS;
    static std::string TAG_E_FLIGHT;

    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;
    virtual void use(ItemStack &, Player &)const;
    ~FireworksItem();
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    FireworksItem(std::string const&, int);
    void initFireworksRocketItem(ItemInstance &, std::vector<ItemInstance> const&, int);
    void initFireworksRocketItem(ItemStack &, std::vector<ItemStack> const&, int);
};
