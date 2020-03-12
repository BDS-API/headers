#pragma once

#include "ItemStack.h"
#include "../util/BlockPos.h"
#include <string>
#include "../actor/Actor.h"
#include "../nbt/CompoundTag.h"
#include "ItemStackBase.h"
#include <memory>
#include "Item.h"
#include "unmapped/ItemDescriptor.h"


class BlockItem : Item {

public:
    ~BlockItem();
    virtual bool isDestructive(int)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
    virtual void _calculatePlacePos(ItemStack &, Actor &, unsigned char &, BlockPos &)const;
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const;
    virtual bool isExperimental(ItemDescriptor const*)const;
    virtual bool isValidAuxValue(int)const;
    virtual void getIconYOffset()const;
    virtual bool isEmissive(int)const;
    BlockItem(std::string const&, int);
};
