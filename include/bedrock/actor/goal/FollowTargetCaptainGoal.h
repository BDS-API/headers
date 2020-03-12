#pragma once

#include <string>
#include "MoveTowardsTargetGoal.h"


class FollowTargetCaptainGoal : MoveTowardsTargetGoal {

public:
    virtual bool canUse();
    ~FollowTargetCaptainGoal();
    virtual void appendDebugInfo(std::string &)const;
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual bool canContinueToUse();
    FollowTargetCaptainGoal(Mob &, float, float, float);
    void _determineMovePos();
};
