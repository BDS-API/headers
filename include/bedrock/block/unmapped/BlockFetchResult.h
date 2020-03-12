#pragma once

#include "../../util/BlockPos.h"
#include "../../../unmapped/Block.h"


class BlockFetchResult {

public:
    BlockFetchResult(Block const&, BlockPos const&, unsigned int);
    BlockFetchResult(BlockFetchResult &&);
    void getDistanceSquared()const;
    BlockFetchResult(BlockFetchResult const&);
    void getBlockPos()const;
    void getBlock()const;
};
