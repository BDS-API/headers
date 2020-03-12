#pragma once

#include <string>
#include "Goal.h"
#include <vector>


class FollowCaravanGoal : Goal {

public:
    virtual bool canContinueToUse();
    virtual void tick();
    virtual void stop();
    virtual void start();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canUse();
    ~FollowCaravanGoal();
    void firstIsLeashed(Mob *, int);
    FollowCaravanGoal(Mob &, float, int, std::vector<MobDescriptor> const&);
    void checkCaravanType(Mob *);
};
