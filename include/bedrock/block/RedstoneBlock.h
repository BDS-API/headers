#pragma once

#include "../util/BlockPos.h"
#include "unmapped/BlockSource.h"
#include "./BlockLegacy.h"
#include <string>


class RedstoneBlock : BlockLegacy {

public:
    virtual ~RedstoneBlock();
    virtual bool isSignalSource()const;
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual bool canSpawnOn()const;

    RedstoneBlock(std::string const&, int);
};
