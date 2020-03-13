#pragma once



class BlockFetchResult {

public:
    BlockFetchResult(Block const&, BlockPos const&, unsigned int); // _ZN16BlockFetchResultC2ERK5BlockRK8BlockPosj
    void getBlock()const; // _ZNK16BlockFetchResult8getBlockEv
    void getBlockPos()const; // _ZNK16BlockFetchResult11getBlockPosEv
    void getDistanceSquared()const; // _ZNK16BlockFetchResult18getDistanceSquaredEv
    BlockFetchResult(BlockFetchResult &&); // _ZN16BlockFetchResultC2EOS_
    BlockFetchResult(BlockFetchResult const&); // _ZN16BlockFetchResultC2ERKS_
};
