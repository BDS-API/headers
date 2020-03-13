#pragma once



class ChunkPos {

public:
    static long INVALID;
    static long MIN;
    static long MAX;

    ChunkPos(int, int); // _ZN8ChunkPosC2Eii
    void operator+(int)const; // _ZNK8ChunkPosplEi
    ChunkPos(); // _ZN8ChunkPosC2Ev
    void operator==(ChunkPos const&)const; // _ZNK8ChunkPoseqERKS_
    void distanceToSqr(ChunkPos const&)const; // _ZNK8ChunkPos13distanceToSqrERKS_
    void operator+(ChunkPos const&)const; // _ZNK8ChunkPosplERKS_
    void operator!=(ChunkPos const&)const; // _ZNK8ChunkPosneERKS_
    ChunkPos(BlockPos const&); // _ZN8ChunkPosC2ERK8BlockPos
    ChunkPos(Vec3 const&); // _ZN8ChunkPosC2ERK4Vec3
    void distanceToSqr(Actor const&)const; // _ZNK8ChunkPos13distanceToSqrERK5Actor
    void getMiddleBlockPosition(int)const; // _ZNK8ChunkPos22getMiddleBlockPositionEi
    void getMiddleBlockX()const; // _ZNK8ChunkPos15getMiddleBlockXEv
    void getMiddleBlockZ()const; // _ZNK8ChunkPos15getMiddleBlockZEv
    void hashCode()const; // _ZNK8ChunkPos8hashCodeEv
    void operator-(ChunkPos const&)const; // _ZNK8ChunkPosmiERKS_
    void min(ChunkPos const&, ChunkPos const&); // _ZN8ChunkPos3minERKS_S1_
    void max(ChunkPos const&, ChunkPos const&); // _ZN8ChunkPos3maxERKS_S1_
    void operator-(int)const; // _ZNK8ChunkPosmiEi
};
