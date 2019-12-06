#pragma once

class SubChunkBlockPos {

public:

    void SubChunkBlockPos(ChunkBlockPos const&);
    void index(void)const;
    void fromIndex(unsigned short);
    void SubChunkBlockPos(void);
    void SubChunkBlockPos(unsigned char);
    void SubChunkBlockPos(unsigned char, unsigned char, unsigned char);
};
