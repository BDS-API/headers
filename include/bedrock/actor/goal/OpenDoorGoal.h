#pragma once

#include "../Mob"


class OpenDoorGoal : DoorInteractGoal {

public:
    OpenDoorGoal::~OpenDoorGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    OpenDoorGoal(Mob &, bool);
};
