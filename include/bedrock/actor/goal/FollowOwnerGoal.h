#pragma once

#include "../../../unmapped/Dimension"
#include "../Mob"
#include "../Player"


class FollowOwnerGoal : Goal {

public:
    virtual FollowOwnerGoal::~FollowOwnerGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);

    FollowOwnerGoal(Mob &, float, float, float);
};
