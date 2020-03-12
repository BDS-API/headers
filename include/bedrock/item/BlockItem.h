#pragma once

#include <memory>
#include "Item.h"
#include <string>
#include "../util/BlockPos.h"


class BlockItem : Item {

public:
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual bool isExperimental(ItemDescriptor const*)const;
    virtual bool isEmissive(int)const;
    virtual void _calculatePlacePos(ItemStack &, Actor &, unsigned char &, BlockPos &)const;
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const;
    virtual void getIconYOffset()const;
    ~BlockItem();
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
    virtual bool isDestructive(int)const;
    virtual bool isValidAuxValue(int)const;
    BlockItem(std::string const&, int);
};
