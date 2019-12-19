#pragma once

class RandomHoverGoal : Goal {

public:
    virtual RandomHoverGoal::~RandomHoverGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    RandomHoverGoal(Mob &, float, int, float, float, float, IntRange);
    void _mobMeetsPreconditions(void)const;
    void _computeNewTarget(void);
    void _moveToTarget(void);
    void _findNewTarget(void)const;
};
