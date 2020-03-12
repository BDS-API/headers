#pragma once

#include "MoveTowardsTargetGoal.h"
#include "../Mob.h"
#include <string>


class FollowTargetCaptainGoal : MoveTowardsTargetGoal {

public:
    virtual void appendDebugInfo(std::string &)const;
    virtual void stop();
    virtual void start();
    ~FollowTargetCaptainGoal();
    virtual void tick();
    virtual bool canUse();
    virtual bool canContinueToUse();
    FollowTargetCaptainGoal(Mob &, float, float, float);
    void _determineMovePos();
};
