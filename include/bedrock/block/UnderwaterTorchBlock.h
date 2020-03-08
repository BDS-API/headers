#pragma once

#include "../../unmapped/BlockSource"
#include "../../unmapped/BaseGameVersion"


class UnderwaterTorchBlock : TorchBlock {

public:
    virtual UnderwaterTorchBlock::~UnderwaterTorchBlock();
    virtual bool isWaterBlocking(void)const;
    virtual bool canContainLiquid(void)const;
    virtual bool canBeUsedInCommands(bool, BaseGameVersion const&)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;

    UnderwaterTorchBlock(std::string const&, int);
};
