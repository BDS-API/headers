#pragma once

#include "../../util/BlockPos.h"
#include "../../../unmapped/ChunkBlockPos.h"


class SubChunkBlockPos {

public:
    SubChunkBlockPos();
    SubChunkBlockPos(unsigned char, unsigned char, unsigned char);
    void fromIndex(unsigned short);
    void operator+(BlockPos const&)const;
    void index()const;
    SubChunkBlockPos(ChunkBlockPos const&);
    SubChunkBlockPos(unsigned char);
};
