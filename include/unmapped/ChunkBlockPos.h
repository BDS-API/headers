#pragma once

#include "../bedrock/util/BlockPos.h"


class ChunkBlockPos {

public:
    void operator+(BlockPos const&)const;
    ChunkBlockPos();
    ChunkBlockPos(unsigned char);
    void below()const;
//  void neighbor(Facing::Name)const; //TODO: incomplete function definition
    void hashCode()const;
    void fromIndex(unsigned short);
    void above()const;
    void index2D()const;
    void operator==(ChunkBlockPos const&)const;
    ChunkBlockPos(unsigned char, short, unsigned char);
    ChunkBlockPos(BlockPos const&);
};
