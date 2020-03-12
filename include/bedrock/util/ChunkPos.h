#pragma once

#include "Vec3.h"
#include "../actor/Actor.h"
#include "BlockPos.h"


class ChunkPos {

public:
    static long INVALID;
    static long MIN;
    static long MAX;

    void operator!=(ChunkPos const&)const;
    ChunkPos(BlockPos const&);
    void getMiddleBlockX()const;
    void operator+(int)const;
    ChunkPos(Vec3 const&);
    void min(ChunkPos const&, ChunkPos const&);
    void operator==(ChunkPos const&)const;
    void getMiddleBlockZ()const;
    void hashCode()const;
    ChunkPos();
    ChunkPos(int, int);
    void distanceToSqr(Actor const&)const;
    void getMiddleBlockPosition(int)const;
    void operator-(ChunkPos const&)const;
    void operator-(int)const;
    void max(ChunkPos const&, ChunkPos const&);
    void distanceToSqr(ChunkPos const&)const;
    void operator+(ChunkPos const&)const;
};
