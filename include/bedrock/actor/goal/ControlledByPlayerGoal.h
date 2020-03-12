#pragma once

#include "Goal.h"
#include "../Mob.h"
#include <string>


class ControlledByPlayerGoal : Goal {

public:
    virtual void appendDebugInfo(std::string &)const;
    virtual void stop();
    virtual bool canUse();
    ~ControlledByPlayerGoal();
    virtual void tick();
    virtual void start();
    void _canBeControlledByRider();
    ControlledByPlayerGoal(Mob &);
};
