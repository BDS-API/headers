#pragma once

#include <string>
#include "BaseMoveToBlockGoal.h"
#include "../../util/BlockPos.h"


class StompBlockGoal : BaseMoveToBlockGoal {

public:
    ~StompBlockGoal(); // _ZN14StompBlockGoalD2Ev
    virtual bool canUse(); // _ZN14StompBlockGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN14StompBlockGoal16canContinueToUseEv
    virtual void start(); // _ZN14StompBlockGoal5startEv
    virtual void stop(); // _ZN14StompBlockGoal4stopEv
    virtual void tick(); // _ZN14StompBlockGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK14StompBlockGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual bool isValidTarget(BlockSource &, BlockPos const&); // _ZN14StompBlockGoal13isValidTargetER11BlockSourceRK8BlockPos
    virtual void _canReach(BlockPos const&); // _ZN14StompBlockGoal9_canReachERK8BlockPos
    virtual void _moveToBlock(); // _ZN14StompBlockGoal12_moveToBlockEv
    virtual void _createBreakProgressParticles(Level &, BlockSource &, BlockPos); // _ZN14StompBlockGoal29_createBreakProgressParticlesER5LevelR11BlockSource8BlockPos
    virtual void _createDestroyParticles(Level &, BlockSource &, BlockPos); // _ZN14StompBlockGoal23_createDestroyParticlesER5LevelR11BlockSource8BlockPos
    virtual void _playBreakProgressSound(Level &, BlockSource &, BlockPos); // _ZN14StompBlockGoal23_playBreakProgressSoundER5LevelR11BlockSource8BlockPos
    virtual void _playDestroySound(Level &, BlockSource &, BlockPos); // _ZN14StompBlockGoal17_playDestroySoundER5LevelR11BlockSource8BlockPos
    StompBlockGoal(Block const*, Mob &, double, int, int, int, float, int); // _ZN14StompBlockGoalC2EPK5BlockR3Mobdiiifi
    void _getPosWithBlock(BlockPos)const; // _ZNK14StompBlockGoal16_getPosWithBlockE8BlockPos
};
