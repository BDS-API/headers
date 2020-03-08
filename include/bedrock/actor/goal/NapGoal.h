#pragma once

#include "../../util/Tick"
#include "../Mob"
#include "../unmapped/ActorFilterGroup"


class NapGoal : Goal {

public:
    static long MOB_DETECT_TIME;

    virtual NapGoal::~NapGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void appendDebugInfo(std::string &)const;

    NapGoal(Mob &, float, float, float, float, ActorFilterGroup const&, ActorFilterGroup const&);
    void _invalidCooldown();
    void _setCooldown();
    void _canSleep(Tick const&)const;
    void _detectsMobs()const;
};
