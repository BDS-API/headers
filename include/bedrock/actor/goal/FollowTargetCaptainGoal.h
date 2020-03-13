#pragma once

#include <string>
#include "MoveTowardsTargetGoal.h"


class FollowTargetCaptainGoal : MoveTowardsTargetGoal {

public:
    ~FollowTargetCaptainGoal(); // _ZN23FollowTargetCaptainGoalD2Ev
    virtual bool canUse(); // _ZN23FollowTargetCaptainGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN23FollowTargetCaptainGoal16canContinueToUseEv
    virtual void start(); // _ZN23FollowTargetCaptainGoal5startEv
    virtual void stop(); // _ZN23FollowTargetCaptainGoal4stopEv
    virtual void tick(); // _ZN23FollowTargetCaptainGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK23FollowTargetCaptainGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    FollowTargetCaptainGoal(Mob &, float, float, float); // _ZN23FollowTargetCaptainGoalC2ER3Mobfff
    void _determineMovePos(); // _ZN23FollowTargetCaptainGoal17_determineMovePosEv
};
