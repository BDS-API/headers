#pragma once

#include "./ChunkBlockPos.h"
#include "../bedrock/util/BlockPos.h"


class ChunkBlockPos {

public:

    ChunkBlockPos();
    void index2D()const;
    ChunkBlockPos(unsigned char);
    ChunkBlockPos(unsigned char, short, unsigned char);
    ChunkBlockPos(BlockPos const&);
    void operator+(BlockPos const&)const;
    void fromIndex(unsigned short);
    void above()const;
    void below()const;
    void hashCode()const;
    void operator==(ChunkBlockPos const&)const;
//  void neighbor(Facing::Name)const; //TODO: incomplete function definition
};
