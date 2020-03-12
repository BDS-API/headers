#pragma once

#include <functional>


namespace RandomPos {

//  void getPos(Vec3 &, Mob &, int, int, int, SolidityCheckType); //TODO: incomplete function definition
    void getPosAvoid(Vec3 &, Mob &, int, int, Vec3 const&);
    void generateRandomSpawnPos(BlockSource &, Random &, Vec3 &, int, int, int, Vec3 *);
    void snapToGround(BlockPos &, int, int, std::function<bool (BlockPos &)>);
    void getSpawnPos(BlockSource &, Random &, Vec3 &, int, int, int);
    void getPosTowards(Vec3 &, Mob &, int, int, Vec3 const&);
//  void generateRandomPos(Vec3 &, Mob &, int, int, int, Vec3 *, bool, bool, IntRange const&, int, SolidityCheckType); //TODO: incomplete function definition
    void _choosePositionOffset(Random &, BlockPos &, int, int, int, Vec3 const*);
//  void snapToGround(BlockPos &, Mob &, int, IntRange const&, SolidityCheckType); //TODO: incomplete function definition
    void spawnSnapToGround(BlockSource &, BlockPos &, float, int);
//  void generateRandomPos(Vec3 &, Mob &, int, int, Vec3 *, bool, bool, int, SolidityCheckType); //TODO: incomplete function definition
//  void getPosInDirection(Vec3 &, Mob &, int, int, int, bool, bool, Vec3 *, IntRange const&, int, SolidityCheckType); //TODO: incomplete function definition
    void snapToGround(BlockPos &, int, int, int, std::function<bool (BlockPos &)>);
    void _choosePositionOffset(Random &, BlockPos &, int, int, int);
    void _choosePositionOffset(Random &, BlockPos &, int, int);
};
