#pragma once

#include "../util/BlockPos"
#include "unmapped/BlockSource"


class RedstoneBlock : BlockLegacy {

public:
    RedstoneBlock::~RedstoneBlock()
    virtual bool isSignalSource()const;
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual bool canSpawnOn()const;

    RedstoneBlock(std::string const&, int);
};
