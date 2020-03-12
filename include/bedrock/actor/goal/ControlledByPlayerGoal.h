#pragma once

#include <string>
#include "Goal.h"


class ControlledByPlayerGoal : Goal {

public:
    virtual void appendDebugInfo(std::string &)const;
    virtual void start();
    virtual void tick();
    virtual void stop();
    ~ControlledByPlayerGoal();
    virtual bool canUse();
    void _canBeControlledByRider();
    ControlledByPlayerGoal(Mob &);
};
