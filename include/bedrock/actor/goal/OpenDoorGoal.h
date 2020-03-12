#pragma once

#include "DoorInteractGoal.h"
#include "../Mob.h"
#include <string>


class OpenDoorGoal : DoorInteractGoal {

public:
    virtual void tick();
    virtual void start();
    ~OpenDoorGoal();
    virtual bool canUse();
    virtual void stop();
    virtual bool canContinueToUse();
    virtual void appendDebugInfo(std::string &)const;
    OpenDoorGoal(Mob &, bool);
};
