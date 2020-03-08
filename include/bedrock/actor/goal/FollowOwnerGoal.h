#pragma once

#include "../Mob"
#include "../../../unmapped/Dimension"
#include "../Player"


class FollowOwnerGoal : Goal {

public:
    FollowOwnerGoal::~FollowOwnerGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);

    FollowOwnerGoal(Mob &, float, float, float);
};
