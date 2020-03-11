#pragma once

#include "unmapped/BlockSource.h"
#include "./TorchBlock.h"
#include "../../unmapped/Block.h"
#include "../util/BlockPos.h"
#include "../util/Random.h"
#include <string>


class RedstoneTorchBlock : TorchBlock {

public:
    virtual ~RedstoneTorchBlock();
    virtual bool isSignalSource()const;
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual bool canSpawnOn()const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual void getTickDelay();

    RedstoneTorchBlock(std::string const&, int, bool);
    void _installCircuit(BlockSource &, BlockPos const&)const;
};
