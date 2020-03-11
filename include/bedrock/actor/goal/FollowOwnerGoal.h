#pragma once

#include "../../../unmapped/Dimension.h"
#include "./Goal.h"
#include "../Player.h"
#include "../Mob.h"
#include <string>


class FollowOwnerGoal : Goal {

public:
    virtual ~FollowOwnerGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;
//  virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>); //TODO: incomplete function definition

    FollowOwnerGoal(Mob &, float, float, float);
};
