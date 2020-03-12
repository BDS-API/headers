#pragma once

#include <string>
#include "TorchBlock.h"


class RedstoneTorchBlock : TorchBlock {

public:
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    ~RedstoneTorchBlock();
    virtual bool canSpawnOn()const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool isSignalSource()const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual void getTickDelay();
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const;
    void _installCircuit(BlockSource &, BlockPos const&)const;
    RedstoneTorchBlock(std::string const&, int, bool);
};
