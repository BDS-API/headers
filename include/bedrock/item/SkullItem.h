#pragma once

#include "../container/Container"
#include "../actor/Actor"
#include "../util/Vec3"
#include "../block/unmapped/BlockSource"
#include "../util/BlockPos"
#include "../nbt/CompoundTag"
#include "unmapped/ItemDescriptor"


class SkullItem : Item {

public:
    SkullItem::~SkullItem()
    virtual void getBlockShape()const;
    virtual void getLevelDataForAuxValue(int)const;
    virtual bool isValidAuxValue(int)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void getAuxValuesDescription()const;
    virtual void _calculatePlacePos(ItemStack &, Actor &, unsigned char &, BlockPos &)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    SkullItem(std::string const&, int);
    void _canDispense(BlockSource &, Vec3 const&, unsigned char)const;
};
