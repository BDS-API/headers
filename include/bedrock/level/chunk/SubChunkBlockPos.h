#pragma once

#include "../../../unmapped/ChunkBlockPos"


class SubChunkBlockPos {

public:

    SubChunkBlockPos(ChunkBlockPos const&);
    void index()const;
    void fromIndex(unsigned short);
    SubChunkBlockPos(void);
    SubChunkBlockPos(unsigned char);
    SubChunkBlockPos(unsigned char, unsigned char, unsigned char);
};
