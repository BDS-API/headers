#pragma once



class SubChunkBlockPos {

public:
    SubChunkBlockPos(ChunkBlockPos const&);
    void index()const;
    SubChunkBlockPos(unsigned char, unsigned char, unsigned char);
    void fromIndex(unsigned short);
    SubChunkBlockPos();
    void operator+(BlockPos const&)const;
    SubChunkBlockPos(unsigned char);
};
