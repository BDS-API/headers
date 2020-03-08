#pragma once

#include "../util/Random"
#include "unmapped/BlockSource"
#include "../util/BlockPos"
#include "../../unmapped/BaseGameVersion"


class UnderwaterTorchBlock : TorchBlock {

public:
    virtual UnderwaterTorchBlock::~UnderwaterTorchBlock()
    virtual bool isWaterBlocking()const;
    virtual bool canContainLiquid()const;
    virtual bool canBeUsedInCommands(bool, BaseGameVersion const&)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;

    UnderwaterTorchBlock(std::string const&, int);
};
