#pragma once

#include "../Mob"


class BreakDoorGoal : DoorInteractGoal {

public:
    BreakDoorGoal::~BreakDoorGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    BreakDoorGoal(Mob &);
    void getBreakRate()const;
};
