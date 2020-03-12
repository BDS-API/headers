#pragma once

#include "../util/BlockPos.h"
#include "ItemStack.h"
#include <string>
#include "../actor/Actor.h"
#include "FertilizerItem.h"
#include "../util/Vec3.h"
#include "../nbt/CompoundTag.h"
#include "../container/Container.h"
#include <memory>
#include "ItemStackBase.h"
#include "../block/unmapped/BlockSource.h"
#include "unmapped/ItemDescriptor.h"


class DyePowderItem : FertilizerItem {

public:
    static long mColorMap;

    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
    ~DyePowderItem();
    virtual void setIcon(std::string const&, int);
    virtual bool isDye()const;
    virtual bool isValidAuxValue(int)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual bool isFertilizer(int)const;
    DyePowderItem(std::string const&, int);
};
