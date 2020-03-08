#pragma once

#include "../../unmapped/BlockSource"


class RedstoneBlock : BlockLegacy {

public:
    virtual RedstoneBlock::~RedstoneBlock();
    virtual bool isSignalSource(void)const;
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual bool canSpawnOn(void)const;

    RedstoneBlock(std::string const&, int);
};
