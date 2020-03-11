#pragma once

#include "../block/unmapped/BlockSource.h"
#include <string>
#include "./ChemistryItem.h"
#include <memory>
#include "./ItemInstance.h"
#include "../util/BlockPos.h"
#include "../actor/Actor.h"
#include "../nbt/CompoundTag.h"
#include "./ItemStack.h"
#include "unmapped/ItemDescriptor.h"


class BalloonItem : ChemistryItem {

public:
    virtual ~BalloonItem();
    virtual void getColor(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&, ItemDescriptor const&)const;
    virtual bool isTintable()const;
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    BalloonItem(std::string const&, int);
    void _getColorIndex(ItemDescriptor const&)const;
    bool canAttachToBlock(BlockPos const&, BlockSource const&);
    void _createKnot(BlockSource &, BlockPos, ItemInstance const&)const;
    void getBalloonSpawnPos(BlockPos const&);
};
