#pragma once



class ChunkPos {

public:
    static long INVALID;
    static long MIN;
    static long MAX;

    void operator!=(ChunkPos const&)const;
    void distanceToSqr(Actor const&)const;
    void hashCode()const;
    void operator-(ChunkPos const&)const;
    ChunkPos();
    void getMiddleBlockX()const;
    void getMiddleBlockZ()const;
    void operator+(ChunkPos const&)const;
    void operator-(int)const;
    void min(ChunkPos const&, ChunkPos const&);
    void operator+(int)const;
    ChunkPos(Vec3 const&);
    ChunkPos(int, int);
    void getMiddleBlockPosition(int)const;
    void distanceToSqr(ChunkPos const&)const;
    void max(ChunkPos const&, ChunkPos const&);
    ChunkPos(BlockPos const&);
    void operator==(ChunkPos const&)const;
};
