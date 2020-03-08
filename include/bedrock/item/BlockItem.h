#pragma once

#include "../nbt/CompoundTag"
#include "../actor/Actor"
#include "../util/BlockPos"
#include "unmapped/ItemDescriptor"


class BlockItem : Item {

public:
    virtual BlockItem::~BlockItem()
    virtual bool isExperimental(ItemDescriptor const*)const;
    virtual bool isDestructive(int)const;
    virtual bool isValidAuxValue(int)const;
    virtual void buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&)const;
    virtual bool isEmissive(int)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void getIconYOffset()const;
    virtual void _calculatePlacePos(ItemStack &, Actor &, unsigned char &, BlockPos &)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    BlockItem(std::string const&, int);
};
