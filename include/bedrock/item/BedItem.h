#pragma once

#include <memory>
#include "Item.h"
#include <string>
#include "../util/BlockPos.h"


class BedItem : Item {

public:
    virtual void setIcon(std::string const&, int);
    virtual bool isValidAuxValue(int)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
    virtual void _checkUseOnPermissions(Actor &, ItemStack &, unsigned char const&, BlockPos const&)const;
    ~BedItem();
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const;
    void _tryUseOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
    BedItem(std::string const&, int);
    void _calculateHeadAndFeetPos(Actor &, BlockPos &, BlockPos &)const;
    void _calculateDir(Actor &)const;
};
