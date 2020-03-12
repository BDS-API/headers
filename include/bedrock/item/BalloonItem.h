#pragma once

#include "ChemistryItem.h"
#include "ItemStack.h"
#include "../util/BlockPos.h"
#include <string>
#include "../actor/Actor.h"
#include "../nbt/CompoundTag.h"
#include <memory>
#include "ItemInstance.h"
#include "../block/unmapped/BlockSource.h"
#include "unmapped/ItemDescriptor.h"


class BalloonItem : ChemistryItem {

public:
    ~BalloonItem();
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
    virtual bool isTintable()const;
    virtual void getColor(std::unique_ptr<CompoundTag> const&, ItemDescriptor const&)const;
    void _getColorIndex(ItemDescriptor const&)const;
    bool canAttachToBlock(BlockPos const&, BlockSource const&);
    void getBalloonSpawnPos(BlockPos const&);
    void _createKnot(BlockSource &, BlockPos, ItemInstance const&)const;
    BalloonItem(std::string const&, int);
};
