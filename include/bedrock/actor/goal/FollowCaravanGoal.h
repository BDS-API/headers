#pragma once

#include <string>
#include "../Mob.h"
#include <vector>
#include "Goal.h"
#include "../../../unmapped/MobDescriptor.h"


class FollowCaravanGoal : Goal {

public:
    virtual void stop();
    virtual void appendDebugInfo(std::string &)const;
    virtual void start();
    virtual void tick();
    virtual bool canContinueToUse();
    virtual bool canUse();
    ~FollowCaravanGoal();
    void firstIsLeashed(Mob *, int);
    FollowCaravanGoal(Mob &, float, int, std::vector<MobDescriptor> const&);
    void checkCaravanType(Mob *);
};
