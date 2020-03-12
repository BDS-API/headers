#pragma once

#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "../../unmapped/Block.h"
#include "BlockLegacy.h"
#include "../util/Random.h"


class RedstoneLampBlock : BlockLegacy {

public:
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    ~RedstoneLampBlock();
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const;
    RedstoneLampBlock(std::string const&, int, bool);
};
