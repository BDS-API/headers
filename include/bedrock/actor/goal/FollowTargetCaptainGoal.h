#pragma once

#include "../Mob"


class FollowTargetCaptainGoal : MoveTowardsTargetGoal {

public:
    FollowTargetCaptainGoal::~FollowTargetCaptainGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    FollowTargetCaptainGoal(Mob &, float, float, float);
    void _determineMovePos();
};
