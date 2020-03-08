#pragma once

#include "../bedrock/util/BlockPos"


class ChunkBlockPos {

public:

    ChunkBlockPos(void);
    void index2D()const;
    ChunkBlockPos(unsigned char);
    ChunkBlockPos(unsigned char, short, unsigned char);
    ChunkBlockPos(BlockPos const&);
    void fromIndex(unsigned short);
    void above()const;
    void below()const;
    void hashCode()const;
    void neighbor(Facing::Name)const;
};
