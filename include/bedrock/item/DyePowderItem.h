#pragma once

#include "../block/unmapped/BlockSource"
#include "../nbt/CompoundTag"
#include "../actor/Actor"
#include "../util/BlockPos"
#include "../util/Vec3"
#include "unmapped/ItemDescriptor"
#include "../container/Container"


class DyePowderItem : FertilizerItem {

public:
    static long mColorMap;

    virtual DyePowderItem::~DyePowderItem()
    virtual bool isDye()const;
    virtual bool isFertilizer(int)const;
    virtual bool isValidAuxValue(int)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void setIcon(std::string const&, int);
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    DyePowderItem(std::string const&, int);
};
