#pragma once

class FollowParentGoal : Goal {

public:
    virtual ~FollowParentGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    void FollowParentGoal(Mob &, float);
};
