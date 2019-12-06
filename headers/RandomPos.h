#pragma once

class RandomPos {

public:

    void getPos(Vec3 &, Mob &, int, int, int, RandomPosTests);
    void generateRandomPos(Vec3 &, Mob &, int, int, Vec3*, int, RandomPosTests);
    void getPosTowards(Vec3 &, Mob &, int, int, Vec3 const&);
    void getPosAvoid(Vec3 &, Mob &, int, int, Vec3 const&);
    void getSpawnPos(BlockSource &, Random &, Vec3 &, int, int, int);
    void generateRandomSpawnPos(BlockSource &, Random &, Vec3 &, int, int, int, Vec3*);
    void _choosePositionOffset(Random &, BlockPos &, int, int);
    void snapToGround(BlockPos &, Mob const&, int, RandomPosTests);
    void spawnSnapToGround(BlockSource &, BlockPos &, float, int);
};
