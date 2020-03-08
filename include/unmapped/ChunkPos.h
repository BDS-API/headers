#pragma once

#include "../bedrock/actor/Actor"


class ChunkPos {

public:
    static long INVALID;
    static long MIN;
    static long MAX;


    ChunkPos(int, int);
    ChunkPos(void);
    void distanceToSqr(ChunkPos const&)const;
    ChunkPos(BlockPos const&);
    ChunkPos(Vec3 const&);
    void distanceToSqr(Actor const&)const;
    void getMiddleBlockPosition(int)const;
    void getMiddleBlockX(void)const;
    void getMiddleBlockZ(void)const;
    void hashCode(void)const;
    void operator-(ChunkPos const&)const;
    void min(ChunkPos const&, ChunkPos const&);
    void max(ChunkPos const&, ChunkPos const&);
    void operator-(int)const;
};
