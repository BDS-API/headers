#pragma once

#include "./Vec3.h"
#include "./ChunkPos.h"
#include "../actor/Actor.h"
#include "./BlockPos.h"


class ChunkPos {

public:
    static long INVALID;
    static long MIN;
    static long MAX;


    ChunkPos(int, int);
    void operator+(int)const;
    ChunkPos();
    void operator==(ChunkPos const&)const;
    void distanceToSqr(ChunkPos const&)const;
    void operator+(ChunkPos const&)const;
    void operator!=(ChunkPos const&)const;
    ChunkPos(BlockPos const&);
    ChunkPos(Vec3 const&);
    void distanceToSqr(Actor const&)const;
    void getMiddleBlockPosition(int)const;
    void getMiddleBlockX()const;
    void getMiddleBlockZ()const;
    void hashCode()const;
    void operator-(ChunkPos const&)const;
    void min(ChunkPos const&, ChunkPos const&);
    void max(ChunkPos const&, ChunkPos const&);
    void operator-(int)const;
};
