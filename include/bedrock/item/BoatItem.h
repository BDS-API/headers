#pragma once

#include "../container/Container"
#include "../actor/Actor"
#include "../util/Vec3"
#include "../block/unmapped/BlockSource"
#include "../util/BlockPos"
#include "../nbt/CompoundTag"
#include "unmapped/ItemDescriptor"


class BoatItem : Item {

public:
    BoatItem::~BoatItem()
    virtual bool isStackedByData()const;
    virtual bool isLiquidClipItem(int)const;
    virtual bool isValidAuxValue(int)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void setIcon(std::string const&, int);
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    BoatItem(std::string const&, int);
    void _getRotationBasedOnFacing(unsigned char)const;
};
