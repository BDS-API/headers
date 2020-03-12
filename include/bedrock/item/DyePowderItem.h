#pragma once

#include <memory>
#include "FertilizerItem.h"
#include <string>
#include "../util/BlockPos.h"


class DyePowderItem : FertilizerItem {

public:
    static long mColorMap;

    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual bool isValidAuxValue(int)const;
    ~DyePowderItem();
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void setIcon(std::string const&, int);
    virtual bool isDye()const;
    virtual bool isFertilizer(int)const;
    DyePowderItem(std::string const&, int);
};
