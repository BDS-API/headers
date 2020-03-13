#pragma once

#include <string>


class BlockPos {

public:
    static long MIN;
    static long MAX;
    static long ONE;
    static long ZERO;

    BlockPos(BlockPos const&); // _ZN8BlockPosC2ERKS_
    BlockPos(int, int, int); // _ZN8BlockPosC2Eiii
    BlockPos(); // _ZN8BlockPosC2Ev
    BlockPos(int); // _ZN8BlockPosC2Ei
    void offset(int, int, int)const; // _ZNK8BlockPos6offsetEiii
    void operator+(int)const; // _ZNK8BlockPosplEi
    void operator-(int)const; // _ZNK8BlockPosmiEi
    void below()const; // _ZNK8BlockPos5belowEv
    void operator+(BlockPos const&)const; // _ZNK8BlockPosplERKS_
    void hashCode()const; // _ZNK8BlockPos8hashCodeEv
    void operator==(BlockPos const&)const; // _ZNK8BlockPoseqERKS_
    void above()const; // _ZNK8BlockPos5aboveEv
    void west()const; // _ZNK8BlockPos4westEv
    void east()const; // _ZNK8BlockPos4eastEv
    void north()const; // _ZNK8BlockPos5northEv
    void south()const; // _ZNK8BlockPos5southEv
    void above(int)const; // _ZNK8BlockPos5aboveEi
    void operator!=(BlockPos const&)const; // _ZNK8BlockPosneERKS_
    void distSqr(BlockPos const&)const; // _ZNK8BlockPos7distSqrERKS_
    void distSqrToCenter(float, float, float)const; // _ZNK8BlockPos15distSqrToCenterEfff
    std::string toString()const; // _ZNK8BlockPos8toStringB5cxx11Ev
    void operator-(BlockPos const&)const; // _ZNK8BlockPosmiERKS_
    void set(int, int, int); // _ZN8BlockPos3setEiii
    void moveUp(); // _ZN8BlockPos6moveUpEv
    void set(BlockPos const&); // _ZN8BlockPos3setERKS_
    BlockPos(Vec3 const&); // _ZN8BlockPosC2ERK4Vec3
    BlockPos(float, float, float); // _ZN8BlockPosC2Efff
    BlockPos(ChunkPos const&, int); // _ZN8BlockPosC2ERK8ChunkPosi
    BlockPos(double, double, double); // _ZN8BlockPosC2Eddd
    void neighbor(unsigned char)const; // _ZNK8BlockPos8neighborEh
    void center()const; // _ZNK8BlockPos6centerEv
    void relative(unsigned char, int)const; // _ZNK8BlockPos8relativeEhi
//  void transform(Rotation, Mirror, Vec3 const&)const; //TODO: incomplete function definition // _ZNK8BlockPos9transformE8Rotation6MirrorRK4Vec3
    void randomSeed()const; // _ZNK8BlockPos10randomSeedEv
    void randomFloat()const; // _ZNK8BlockPos11randomFloatEv
    void min(BlockPos const&, BlockPos const&); // _ZN8BlockPos3minERKS_S1_
    void max(BlockPos const&, BlockPos const&); // _ZN8BlockPos3maxERKS_S1_
    void operator/(int)const; // _ZNK8BlockPosdvEi
    void operator-()const; // _ZNK8BlockPosngEv
    void below(int)const; // _ZNK8BlockPos5belowEi
    void operator*(int)const; // _ZNK8BlockPosmlEi
    void moveY(int); // _ZN8BlockPos5moveYEi
    void east(int)const; // _ZNK8BlockPos4eastEi
    void south(int)const; // _ZNK8BlockPos5southEi
    void moveDown(); // _ZN8BlockPos8moveDownEv
};
