#pragma once

#include <string>
#include "DoorInteractGoal.h"


class OpenDoorGoal : DoorInteractGoal {

public:
    virtual void appendDebugInfo(std::string &)const;
    ~OpenDoorGoal();
    virtual void tick();
    virtual bool canUse();
    virtual void start();
    virtual void stop();
    virtual bool canContinueToUse();
    OpenDoorGoal(Mob &, bool);
};
