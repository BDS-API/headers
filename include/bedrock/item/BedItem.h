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


class BedItem : Item {

public:
    virtual void setIcon(std::string const&, int);
    ~BedItem();
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
    virtual bool isValidAuxValue(int)const;
    virtual void _checkUseOnPermissions(Actor &, ItemStack &, unsigned char const&, BlockPos const&)const;
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const;
    void _calculateDir(Actor &)const;
    void _tryUseOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
    void _calculateHeadAndFeetPos(Actor &, BlockPos &, BlockPos &)const;
    BedItem(std::string const&, int);
};
