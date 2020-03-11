#pragma once

#include "./Vec3.h"
#include "./ChunkPos.h"
#include "./BlockPos.h"
#include <string>


class BlockPos {

public:
    static long MIN;
    static long MAX;
    static long ONE;
    static long ZERO;


    BlockPos(BlockPos const&);
    BlockPos(int, int, int);
    BlockPos();
    BlockPos(int);
    void offset(int, int, int)const;
    void operator+(int)const;
    void operator-(int)const;
    void below()const;
    void operator+(BlockPos const&)const;
    void hashCode()const;
    void operator==(BlockPos const&)const;
    void above()const;
    void west()const;
    void east()const;
    void north()const;
    void south()const;
    void above(int)const;
    void operator!=(BlockPos const&)const;
    void distSqr(BlockPos const&)const;
    void distSqrToCenter(float, float, float)const;
    std::string toString()const;
    void operator-(BlockPos const&)const;
    void set(int, int, int);
    void moveUp();
    void set(BlockPos const&);
    BlockPos(Vec3 const&);
    BlockPos(float, float, float);
    BlockPos(ChunkPos const&, int);
    BlockPos(double, double, double);
    void neighbor(unsigned char)const;
    void center()const;
    void relative(unsigned char, int)const;
//  void transform(Rotation, Mirror, Vec3 const&)const; //TODO: incomplete function definition
    void randomSeed()const;
    void randomFloat()const;
    void min(BlockPos const&, BlockPos const&);
    void max(BlockPos const&, BlockPos const&);
    void operator/(int)const;
    void operator-()const;
    void below(int)const;
    void operator*(int)const;
    void moveY(int);
    void east(int)const;
    void south(int)const;
    void moveDown();
};
