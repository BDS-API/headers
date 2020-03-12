#pragma once

#include <string>
#include "../Mob.h"
#include "../unmapped/ActorFilterGroup.h"
#include "Goal.h"
#include "../../util/Tick.h"


class NapGoal : Goal {

public:
    static long MOB_DETECT_TIME;

    virtual void start();
    virtual void stop();
    virtual bool canContinueToUse();
    virtual bool canUse();
    ~NapGoal();
    virtual void appendDebugInfo(std::string &)const;
    void _setCooldown();
    NapGoal(Mob &, float, float, float, float, ActorFilterGroup const&, ActorFilterGroup const&);
    void _canSleep(Tick const&)const;
    void _detectsMobs()const;
    void _invalidCooldown();
};
