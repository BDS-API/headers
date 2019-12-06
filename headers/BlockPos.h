#pragma once

class BlockPos {

public:
    static long BlockPos::MIN;
    static long BlockPos::MAX;
    static long BlockPos::ONE;
    static long BlockPos::ZERO;


    void BlockPos(BlockPos const&);
    void BlockPos(int, int, int);
    void BlockPos(void);
    void BlockPos(int);
    void offset(int, int, int)const;
    void operator-(int)const;
    void below(void)const;
    void hashCode(void)const;
    void above(void)const;
    void west(void)const;
    void east(void)const;
    void north(void)const;
    void south(void)const;
    void above(int)const;
    void distSqr(BlockPos const&)const;
    void distSqrToCenter(float, float, float)const;
    void operator-(BlockPos const&)const;
    void set(int, int, int);
    void moveUp(void);
    void set(BlockPos const&);
    void BlockPos(Vec3 const&);
    void BlockPos(float, float, float);
    void BlockPos(ChunkPos const&, int);
    void BlockPos(double, double, double);
    void neighbor(unsigned char)const;
    void center(void)const;
    void relative(unsigned char, int)const;
    void transform(Rotation, Mirror, Vec3 const&)const;
    void randomSeed(void)const;
    void randomFloat(void)const;
    void min(BlockPos const&, BlockPos const&);
    void max(BlockPos const&, BlockPos const&);
    void operator-(void)const;
    void below(int)const;
    void moveY(int);
    void east(int)const;
    void south(int)const;
    void moveDown(void);
};
