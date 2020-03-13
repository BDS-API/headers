#pragma once

#include <string>
#include "Goal.h"


class FollowOwnerGoal : Goal {

public:
    ~FollowOwnerGoal(); // _ZN15FollowOwnerGoalD2Ev
    virtual bool canUse(); // _ZN15FollowOwnerGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN15FollowOwnerGoal16canContinueToUseEv
    virtual void start(); // _ZN15FollowOwnerGoal5startEv
    virtual void stop(); // _ZN15FollowOwnerGoal4stopEv
    virtual void tick(); // _ZN15FollowOwnerGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK15FollowOwnerGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//  virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>); //TODO: incomplete function definition // _ZN15FollowOwnerGoal24onPlayerDimensionChangedEP6Player11AutomaticIDI9DimensioniE
    FollowOwnerGoal(Mob &, float, float, float); // _ZN15FollowOwnerGoalC2ER3Mobfff
};
