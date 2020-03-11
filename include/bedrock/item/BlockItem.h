#pragma once

#include <string>
#include "./ItemStackBase.h"
#include <memory>
#include "../util/BlockPos.h"
#include "./Item.h"
#include "../actor/Actor.h"
#include "../nbt/CompoundTag.h"
#include "./ItemStack.h"
#include "unmapped/ItemDescriptor.h"


class BlockItem : Item {

public:
    virtual ~BlockItem();
    virtual bool isExperimental(ItemDescriptor const*)const;
    virtual bool isDestructive(int)const;
    virtual bool isValidAuxValue(int)const;
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&)const;
    virtual bool isEmissive(int)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void getIconYOffset()const;
    virtual void _calculatePlacePos(ItemStack &, Actor &, unsigned char &, BlockPos &)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    BlockItem(std::string const&, int);
};
