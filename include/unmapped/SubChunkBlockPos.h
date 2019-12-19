#pragma once

class SubChunkBlockPos {

public:

    SubChunkBlockPos(ChunkBlockPos const&);
    void index(void)const;
    void fromIndex(unsigned short);
    SubChunkBlockPos(void);
    SubChunkBlockPos(unsigned char);
    SubChunkBlockPos(unsigned char, unsigned char, unsigned char);
};
