#pragma once



class CommandAreaFactory {

public:
    CommandAreaFactory(Dimension &); // _ZN18CommandAreaFactoryC2ER9Dimension
    void findArea(BlockPos const&, bool)const; // _ZNK18CommandAreaFactory8findAreaERK8BlockPosb
    void _getArea(Bounds const&, bool)const; // _ZNK18CommandAreaFactory8_getAreaERK6Boundsb
    void findAreaWithBuffer(BlockPos const&, bool)const; // _ZNK18CommandAreaFactory18findAreaWithBufferERK8BlockPosb
    void findAreaWithBuffer(BlockPos const&, BlockPos const&, bool)const; // _ZNK18CommandAreaFactory18findAreaWithBufferERK8BlockPosS2_b
    void findArea(BlockPos const&, BlockPos const&, bool)const; // _ZNK18CommandAreaFactory8findAreaERK8BlockPosS2_b
};
