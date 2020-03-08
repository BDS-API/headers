#pragma once

#include "unmapped/BlockSource"
#include "../util/BlockPos"


class RedstoneBlock : BlockLegacy {

public:
    virtual RedstoneBlock::~RedstoneBlock()
    virtual bool isSignalSource()const;
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual bool canSpawnOn()const;

    RedstoneBlock(std::string const&, int);
};
