#pragma once

#include "../block/unmapped/BlockSource"
#include "../nbt/CompoundTag"
#include "../actor/Actor"
#include "../util/BlockPos"
#include "../util/Vec3"
#include "unmapped/ItemDescriptor"
#include "../container/Container"


class BoatItem : Item {

public:
    virtual BoatItem::~BoatItem()
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
