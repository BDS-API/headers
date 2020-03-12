#pragma once

#include <string>
#include "BlockLegacy.h"


class RedstoneBlock : BlockLegacy {

public:
    virtual bool isSignalSource()const;
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual bool canSpawnOn()const;
    ~RedstoneBlock();
    RedstoneBlock(std::string const&, int);
};
