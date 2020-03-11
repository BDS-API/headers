#pragma once

#include "./Goal.h"
#include "../Mob.h"
#include <string>


class ControlledByPlayerGoal : Goal {

public:
    virtual ~ControlledByPlayerGoal();
    virtual bool canUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    ControlledByPlayerGoal(Mob &);
    void _canBeControlledByRider();
};
