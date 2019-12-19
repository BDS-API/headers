#pragma once

class LeapAtTargetGoal : Goal {

public:
    virtual LeapAtTargetGoal::~LeapAtTargetGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void appendDebugInfo(std::string &)const;

    LeapAtTargetGoal(Mob &, float, bool);
};
