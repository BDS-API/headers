#pragma once

#include <memory>
#include <string>
#include "../util/BlockPos.h"
#include "ChemistryItem.h"


class BalloonItem : ChemistryItem {

public:
    ~BalloonItem();
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
    virtual bool isTintable()const;
    virtual void getColor(std::unique_ptr<CompoundTag> const&, ItemDescriptor const&)const;
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const;
    void _createKnot(BlockSource &, BlockPos, ItemInstance const&)const;
    bool canAttachToBlock(BlockPos const&, BlockSource const&);
    void _getColorIndex(ItemDescriptor const&)const;
    void getBalloonSpawnPos(BlockPos const&);
    BalloonItem(std::string const&, int);
};
