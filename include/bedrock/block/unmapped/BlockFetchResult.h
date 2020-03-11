#pragma once

#include "../../../unmapped/Block.h"
#include "../../util/BlockPos.h"
#include "./BlockFetchResult.h"


class BlockFetchResult {

public:

    BlockFetchResult(Block const&, BlockPos const&, unsigned int);
    void getBlock()const;
    void getBlockPos()const;
    void getDistanceSquared()const;
    BlockFetchResult(BlockFetchResult &&);
    BlockFetchResult(BlockFetchResult const&);
};
