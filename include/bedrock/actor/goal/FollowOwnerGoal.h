#pragma once

#include <string>
#include "Goal.h"


class FollowOwnerGoal : Goal {

public:
    virtual bool canUse();
    virtual void appendDebugInfo(std::string &)const;
    ~FollowOwnerGoal();
//  virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>); //TODO: incomplete function definition
    virtual bool canContinueToUse();
    virtual void stop();
    virtual void tick();
    virtual void start();
    FollowOwnerGoal(Mob &, float, float, float);
};
