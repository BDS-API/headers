#pragma once



class BlockFetchResult {

public:

    BlockFetchResult(Block const&, BlockPos const&, unsigned int);
    void getBlock(void)const;
    void getBlockPos(void)const;
    void getDistanceSquared(void)const;
    BlockFetchResult(BlockFetchResult&&);
    BlockFetchResult(BlockFetchResult const&);
};
