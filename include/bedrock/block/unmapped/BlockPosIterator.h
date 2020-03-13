#pragma once



class BlockPosIterator {

public:
    BlockPosIterator(BlockPos const&, BlockPos const&); // _ZN16BlockPosIteratorC2ERK8BlockPosS2_
    void operator*(); // _ZN16BlockPosIteratordeEv
    void operator!=(BlockPosIterator const&)const; // _ZNK16BlockPosIteratorneERKS_
    void begin()const; // _ZNK16BlockPosIterator5beginEv
    void end()const; // _ZNK16BlockPosIterator3endEv
};
