#pragma once



class SubChunkBlockPos {

public:
    SubChunkBlockPos(ChunkBlockPos const&); // _ZN16SubChunkBlockPosC2ERK13ChunkBlockPos
    void index()const; // _ZNK16SubChunkBlockPos5indexEv
    void fromIndex(unsigned short); // _ZN16SubChunkBlockPos9fromIndexEt
    void operator+(BlockPos const&)const; // _ZNK16SubChunkBlockPosplERK8BlockPos
    SubChunkBlockPos(); // _ZN16SubChunkBlockPosC2Ev
    SubChunkBlockPos(unsigned char); // _ZN16SubChunkBlockPosC2Eh
    SubChunkBlockPos(unsigned char, unsigned char, unsigned char); // _ZN16SubChunkBlockPosC2Ehhh
};
