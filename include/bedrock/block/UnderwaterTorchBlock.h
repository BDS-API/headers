#pragma once

#include <string>
#include "TorchBlock.h"


class UnderwaterTorchBlock : TorchBlock {

public:
    virtual bool isWaterBlocking()const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    ~UnderwaterTorchBlock();
    virtual bool canBeUsedInCommands(bool, BaseGameVersion const&)const;
    virtual bool canContainLiquid()const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    UnderwaterTorchBlock(std::string const&, int);
};
