#pragma once

#include "../block/unmapped/BlockSource"
#include "../actor/Actor"
#include "../nbt/CompoundTag"
#include "../util/BlockPos"
#include "unmapped/ItemDescriptor"


class BalloonItem : ChemistryItem {

public:
    virtual BalloonItem::~BalloonItem()
    virtual void getColor(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&, ItemDescriptor const&)const;
    virtual bool isTintable()const;
    virtual void buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    BalloonItem(std::string const&, int);
    void _getColorIndex(ItemDescriptor const&)const;
    bool canAttachToBlock(BlockPos const&, BlockSource const&);
    void _createKnot(BlockSource &, BlockPos, ItemInstance const&)const;
    void getBalloonSpawnPos(BlockPos const&);
};
