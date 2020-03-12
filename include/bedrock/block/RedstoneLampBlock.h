#pragma once

#include <string>
#include "BlockLegacy.h"


class RedstoneLampBlock : BlockLegacy {

public:
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    ~RedstoneLampBlock();
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    RedstoneLampBlock(std::string const&, int, bool);
};
