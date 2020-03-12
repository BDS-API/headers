#pragma once

#include <memory>
#include "Item.h"
#include <string>
#include "../util/BlockPos.h"


class SkullItem : Item {

public:
    virtual void getLevelDataForAuxValue(int)const;
    virtual bool isValidAuxValue(int)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
    virtual void getBlockShape()const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual std::string getAuxValuesDescription()const;
    ~SkullItem();
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void _calculatePlacePos(ItemStack &, Actor &, unsigned char &, BlockPos &)const;
    void _canDispense(BlockSource &, Vec3 const&, unsigned char)const;
    SkullItem(std::string const&, int);
};
