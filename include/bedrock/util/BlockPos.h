#pragma once

#include "Vec3.h"
#include "ChunkPos.h"


class BlockPos {

public:
    static long MIN;
    static long MAX;
    static long ONE;
    static long ZERO;

    void operator+(BlockPos const&)const;
    void center()const;
    void operator/(int)const;
    void above(int)const;
    void north()const;
    void moveY(int);
    void set(int, int, int);
    void south()const;
    BlockPos(double, double, double);
    void neighbor(unsigned char)const;
    void below(int)const;
    void moveDown();
    void west()const;
    void randomSeed()const;
    BlockPos(Vec3 const&);
//  void transform(Rotation, Mirror, Vec3 const&)const; //TODO: incomplete function definition
    void min(BlockPos const&, BlockPos const&);
    void max(BlockPos const&, BlockPos const&);
    void south(int)const;
    BlockPos(ChunkPos const&, int);
    void above()const;
    void randomFloat()const;
    void offset(int, int, int)const;
    BlockPos();
    void operator-()const;
    std::string toString()const;
    void set(BlockPos const&);
    void operator+(int)const;
    BlockPos(int, int, int);
    BlockPos(BlockPos const&);
    void below()const;
    void operator-(int)const;
    void distSqr(BlockPos const&)const;
    void relative(unsigned char, int)const;
    void operator-(BlockPos const&)const;
    void distSqrToCenter(float, float, float)const;
    void moveUp();
    void east()const;
    BlockPos(int);
    void east(int)const;
    void operator*(int)const;
    BlockPos(float, float, float);
    void operator!=(BlockPos const&)const;
    void operator==(BlockPos const&)const;
    void hashCode()const;
};
