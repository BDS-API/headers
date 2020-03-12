#pragma once

#include <string>
#include "../Player.h"
#include "../Mob.h"
#include "Goal.h"
#include "../../../unmapped/Dimension.h"


class FollowOwnerGoal : Goal {

public:
    virtual void start();
    virtual bool canContinueToUse();
    virtual void tick();
//  virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>); //TODO: incomplete function definition
    virtual bool canUse();
    virtual void stop();
    ~FollowOwnerGoal();
    virtual void appendDebugInfo(std::string &)const;
    FollowOwnerGoal(Mob &, float, float, float);
};
