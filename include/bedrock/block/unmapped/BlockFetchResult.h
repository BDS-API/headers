#pragma once



class BlockFetchResult {

public:
    BlockFetchResult(Block const&, BlockPos const&, unsigned int);
    void getBlockPos()const;
    BlockFetchResult(BlockFetchResult &&);
    BlockFetchResult(BlockFetchResult const&);
    void getBlock()const;
    void getDistanceSquared()const;
};
