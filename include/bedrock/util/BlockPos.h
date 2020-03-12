#pragma once

#include <string>


class BlockPos {

public:
    static long MIN;
    static long MAX;
    static long ONE;
    static long ZERO;

    void distSqrToCenter(float, float, float)const;
    BlockPos(int);
    void below(int)const;
    void east(int)const;
    void below()const;
    void above()const;
    void relative(unsigned char, int)const;
    void moveDown();
    void south(int)const;
    void operator+(int)const;
    void south()const;
    std::string toString()const;
    void operator/(int)const;
    void neighbor(unsigned char)const;
    void above(int)const;
    void set(int, int, int);
    void operator*(int)const;
    void west()const;
    void min(BlockPos const&, BlockPos const&);
    void north()const;
    void operator-(BlockPos const&)const;
    void moveY(int);
    void set(BlockPos const&);
    void operator-(int)const;
    BlockPos(int, int, int);
    void east()const;
    void max(BlockPos const&, BlockPos const&);
//  void transform(Rotation, Mirror, Vec3 const&)const; //TODO: incomplete function definition
    void hashCode()const;
    void distSqr(BlockPos const&)const;
    void center()const;
    void offset(int, int, int)const;
    void operator==(BlockPos const&)const;
    void operator!=(BlockPos const&)const;
    BlockPos(float, float, float);
    void operator-()const;
    void operator+(BlockPos const&)const;
    BlockPos(Vec3 const&);
    void randomSeed()const;
    void randomFloat()const;
    BlockPos(double, double, double);
    BlockPos(BlockPos const&);
    BlockPos(ChunkPos const&, int);
    void moveUp();
    BlockPos();
};
