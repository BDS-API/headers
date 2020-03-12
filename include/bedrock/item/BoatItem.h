#pragma once

#include <memory>
#include "Item.h"
#include <string>
#include "../util/BlockPos.h"


class BoatItem : Item {

public:
    virtual bool isValidAuxValue(int)const;
    virtual void setIcon(std::string const&, int);
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual bool isLiquidClipItem(int)const;
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const;
    virtual bool isStackedByData()const;
    ~BoatItem();
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    void _getRotationBasedOnFacing(unsigned char)const;
    BoatItem(std::string const&, int);
};
