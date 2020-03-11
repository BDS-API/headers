#pragma once

#include "../Mob.h"
#include "./MoveTowardsTargetGoal.h"
#include <string>


class FollowTargetCaptainGoal : MoveTowardsTargetGoal {

public:
    virtual ~FollowTargetCaptainGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    FollowTargetCaptainGoal(Mob &, float, float, float);
    void _determineMovePos();
};
