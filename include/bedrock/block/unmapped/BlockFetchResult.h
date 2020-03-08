#pragma once

#include "../../util/BlockPos"
#include "../../../unmapped/Block"


class BlockFetchResult {

public:

    BlockFetchResult(Block const&, BlockPos const&, unsigned int);
    void getBlock()const;
    void getBlockPos()const;
    void getDistanceSquared()const;
    BlockFetchResult(BlockFetchResult&&);
    BlockFetchResult(BlockFetchResult const&);
};
