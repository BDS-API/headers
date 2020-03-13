#pragma once

#include <string>
#include "../../util/BlockPos.h"
#include "StompBlockGoal.h"


class StompEggGoal : StompBlockGoal {

public:
    ~StompEggGoal(); // _ZN12StompEggGoalD2Ev
    virtual void appendDebugInfo(std::string &)const; // _ZNK12StompEggGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void _createBreakProgressParticles(Level &, BlockSource &, BlockPos); // _ZN12StompEggGoal29_createBreakProgressParticlesER5LevelR11BlockSource8BlockPos
    virtual void _createDestroyParticles(Level &, BlockSource &, BlockPos); // _ZN12StompEggGoal23_createDestroyParticlesER5LevelR11BlockSource8BlockPos
    virtual void _playBreakProgressSound(Level &, BlockSource &, BlockPos); // _ZN12StompEggGoal23_playBreakProgressSoundER5LevelR11BlockSource8BlockPos
    virtual void _playDestroySound(Level &, BlockSource &, BlockPos); // _ZN12StompEggGoal17_playDestroySoundER5LevelR11BlockSource8BlockPos
    StompEggGoal(Mob &, double, int, int, int, float, int); // _ZN12StompEggGoalC2ER3Mobdiiifi
};
