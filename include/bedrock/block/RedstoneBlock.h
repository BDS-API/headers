#pragma once

#include <string>
#include "BlockLegacy.h"
#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"


class RedstoneBlock : BlockLegacy {

public:
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    ~RedstoneBlock();
    virtual bool canSpawnOn()const;
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const;
    virtual bool isSignalSource()const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    RedstoneBlock(std::string const&, int);
};
