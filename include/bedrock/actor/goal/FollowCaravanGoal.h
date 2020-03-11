#pragma once

#include <memory>
#include "../../../unmapped/MobDescriptor.h"
#include "./Goal.h"
#include <vector>
#include "../Mob.h"
#include <string>


class FollowCaravanGoal : Goal {

public:
    virtual ~FollowCaravanGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    FollowCaravanGoal(Mob &, float, int, std::vector<MobDescriptor, std::allocator<MobDescriptor>> const&);
    void firstIsLeashed(Mob *, int);
    void checkCaravanType(Mob *);
};
