#pragma once

#include "unmapped/BlockSource.h"
#include "./TorchBlock.h"
#include "../../unmapped/BaseGameVersion.h"
#include "../util/BlockPos.h"
#include "../util/Random.h"
#include <string>


class UnderwaterTorchBlock : TorchBlock {

public:
    virtual ~UnderwaterTorchBlock();
    virtual bool isWaterBlocking()const;
    virtual bool canContainLiquid()const;
    virtual bool canBeUsedInCommands(bool, BaseGameVersion const&)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;

    UnderwaterTorchBlock(std::string const&, int);
};
