#pragma once

class FollowFlockGoal : Goal {

public:
    virtual FollowFlockGoal::~FollowFlockGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual bool canBeInterrupted(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    FollowFlockGoal(Mob &, float);
};
