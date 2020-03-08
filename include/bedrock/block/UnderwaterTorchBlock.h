#pragma once

#include "../../unmapped/BaseGameVersion"
#include "../util/Random"
#include "../util/BlockPos"
#include "unmapped/BlockSource"


class UnderwaterTorchBlock : TorchBlock {

public:
    UnderwaterTorchBlock::~UnderwaterTorchBlock()
    virtual bool isWaterBlocking()const;
    virtual bool canContainLiquid()const;
    virtual bool canBeUsedInCommands(bool, BaseGameVersion const&)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;

    UnderwaterTorchBlock(std::string const&, int);
};
