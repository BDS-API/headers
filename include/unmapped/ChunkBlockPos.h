#pragma once



class ChunkBlockPos {

public:
    ChunkBlockPos(); // _ZN13ChunkBlockPosC2Ev
    void index2D()const; // _ZNK13ChunkBlockPos7index2DEv
    ChunkBlockPos(unsigned char); // _ZN13ChunkBlockPosC2Eh
    ChunkBlockPos(unsigned char, short, unsigned char); // _ZN13ChunkBlockPosC2Ehsh
    ChunkBlockPos(BlockPos const&); // _ZN13ChunkBlockPosC2ERK8BlockPos
    void operator+(BlockPos const&)const; // _ZNK13ChunkBlockPosplERK8BlockPos
    void fromIndex(unsigned short); // _ZN13ChunkBlockPos9fromIndexEt
    void above()const; // _ZNK13ChunkBlockPos5aboveEv
    void below()const; // _ZNK13ChunkBlockPos5belowEv
    void hashCode()const; // _ZNK13ChunkBlockPos8hashCodeEv
    void operator==(ChunkBlockPos const&)const; // _ZNK13ChunkBlockPoseqERKS_
//  void neighbor(Facing::Name)const; //TODO: incomplete function definition // _ZNK13ChunkBlockPos8neighborEN6Facing4NameE
};
