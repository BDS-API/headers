#pragma once

#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "TorchBlock.h"
#include "../../unmapped/BaseGameVersion.h"
#include "../util/Random.h"


class UnderwaterTorchBlock : TorchBlock {

public:
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual bool canContainLiquid()const;
    virtual bool canBeUsedInCommands(bool, BaseGameVersion const&)const;
    virtual bool isWaterBlocking()const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    ~UnderwaterTorchBlock();
    UnderwaterTorchBlock(std::string const&, int);
};
