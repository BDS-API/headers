#pragma once

#include "../../../unmapped/ChunkBlockPos.h"
#include "../../util/BlockPos.h"


class SubChunkBlockPos {

public:

    SubChunkBlockPos(ChunkBlockPos const&);
    void index()const;
    void fromIndex(unsigned short);
    void operator+(BlockPos const&)const;
    SubChunkBlockPos();
    SubChunkBlockPos(unsigned char);
    SubChunkBlockPos(unsigned char, unsigned char, unsigned char);
};
