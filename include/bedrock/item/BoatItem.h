#pragma once

#include "../util/BlockPos.h"
#include "ItemStack.h"
#include <string>
#include "../actor/Actor.h"
#include "../util/Vec3.h"
#include "../nbt/CompoundTag.h"
#include "../container/Container.h"
#include <memory>
#include "Item.h"
#include "ItemStackBase.h"
#include "../block/unmapped/BlockSource.h"
#include "unmapped/ItemDescriptor.h"


class BoatItem : Item {

public:
    virtual bool isLiquidClipItem(int)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual bool isStackedByData()const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    ~BoatItem();
    virtual bool isValidAuxValue(int)const;
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const;
    virtual void setIcon(std::string const&, int);
    BoatItem(std::string const&, int);
    void _getRotationBasedOnFacing(unsigned char)const;
};
