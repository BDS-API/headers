#pragma once

#include <string>
#include "Goal.h"


class NapGoal : Goal {

public:
    static long MOB_DETECT_TIME;

    virtual void appendDebugInfo(std::string &)const;
    virtual bool canUse();
    virtual void stop();
    virtual bool canContinueToUse();
    virtual void start();
    ~NapGoal();
    void _canSleep(Tick const&)const;
    NapGoal(Mob &, float, float, float, float, ActorFilterGroup const&, ActorFilterGroup const&);
    void _setCooldown();
    void _detectsMobs()const;
    void _invalidCooldown();
};
