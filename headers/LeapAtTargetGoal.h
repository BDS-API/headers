#pragma once

class LeapAtTargetGoal : Goal {

public:
    virtual ~LeapAtTargetGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void appendDebugInfo(std::string &)const;

    void LeapAtTargetGoal(Mob &, float, bool);
};
