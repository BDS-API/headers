#pragma once

#include "../Mob.h"
#include "./DoorInteractGoal.h"
#include <string>


class OpenDoorGoal : DoorInteractGoal {

public:
    virtual ~OpenDoorGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    OpenDoorGoal(Mob &, bool);
};
