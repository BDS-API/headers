#pragma once

#include <functional>


namespace RandomPos {

//  void getPos(Vec3 &, Mob &, int, int, int, SolidityCheckType); //TODO: incomplete function definition // _ZN9RandomPos6getPosER4Vec3R3Mobiii17SolidityCheckType
//  void generateRandomPos(Vec3 &, Mob &, int, int, Vec3 *, bool, bool, int, SolidityCheckType); //TODO: incomplete function definition // _ZN9RandomPos17generateRandomPosER4Vec3R3MobiiPS0_bbi17SolidityCheckType
    void getPosTowards(Vec3 &, Mob &, int, int, Vec3 const&); // _ZN9RandomPos13getPosTowardsER4Vec3R3MobiiRKS0_
//  void getPosInDirection(Vec3 &, Mob &, int, int, int, bool, bool, Vec3 *, IntRange const&, int, SolidityCheckType); //TODO: incomplete function definition // _ZN9RandomPos17getPosInDirectionER4Vec3R3MobiiibbPS0_RK8IntRangei17SolidityCheckType
//  void generateRandomPos(Vec3 &, Mob &, int, int, int, Vec3 *, bool, bool, IntRange const&, int, SolidityCheckType); //TODO: incomplete function definition // _ZN9RandomPos17generateRandomPosER4Vec3R3MobiiiPS0_bbRK8IntRangei17SolidityCheckType
    void getPosAvoid(Vec3 &, Mob &, int, int, Vec3 const&); // _ZN9RandomPos11getPosAvoidER4Vec3R3MobiiRKS0_
    void getSpawnPos(BlockSource &, Random &, Vec3 &, int, int, int); // _ZN9RandomPos11getSpawnPosER11BlockSourceR6RandomR4Vec3iii
    void generateRandomSpawnPos(BlockSource &, Random &, Vec3 &, int, int, int, Vec3 *); // _ZN9RandomPos22generateRandomSpawnPosER11BlockSourceR6RandomR4Vec3iiiPS4_
    void _choosePositionOffset(Random &, BlockPos &, int, int, int, Vec3 const*); // _ZN9RandomPos21_choosePositionOffsetER6RandomR8BlockPosiiiPK4Vec3
//  void snapToGround(BlockPos &, Mob &, int, IntRange const&, SolidityCheckType); //TODO: incomplete function definition // _ZN9RandomPos12snapToGroundER8BlockPosR3MobiRK8IntRange17SolidityCheckType
    void snapToGround(BlockPos &, int, int, int, std::function<bool (BlockPos &)>); // _ZN9RandomPos12snapToGroundER8BlockPosiiiSt8functionIFbS1_EE
    void snapToGround(BlockPos &, int, int, std::function<bool (BlockPos &)>); // _ZN9RandomPos12snapToGroundER8BlockPosiiSt8functionIFbS1_EE
    void _choosePositionOffset(Random &, BlockPos &, int, int); // _ZN9RandomPos21_choosePositionOffsetER6RandomR8BlockPosii
    void spawnSnapToGround(BlockSource &, BlockPos &, float, int); // _ZN9RandomPos17spawnSnapToGroundER11BlockSourceR8BlockPosfi
    void _choosePositionOffset(Random &, BlockPos &, int, int, int); // _ZN9RandomPos21_choosePositionOffsetER6RandomR8BlockPosiii
};
