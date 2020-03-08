#pragma once

#include "../Mob"


class LeapAtTargetGoal : Goal {

public:
    virtual LeapAtTargetGoal::~LeapAtTargetGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void appendDebugInfo(std::string &)const;

    LeapAtTargetGoal(Mob &, float, bool);
};
