#pragma once

#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "TorchBlock.h"
#include "../../unmapped/Block.h"
#include "../util/Random.h"


class RedstoneTorchBlock : TorchBlock {

public:
    ~RedstoneTorchBlock();
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void getTickDelay();
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual bool isSignalSource()const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    virtual bool canSpawnOn()const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    RedstoneTorchBlock(std::string const&, int, bool);
    void _installCircuit(BlockSource &, BlockPos const&)const;
};
