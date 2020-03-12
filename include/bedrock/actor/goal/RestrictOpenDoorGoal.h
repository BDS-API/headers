#pragma once

#include "Goal.h"
#include "../Mob.h"
#include <string>


class RestrictOpenDoorGoal : Goal {

public:
    virtual bool canUse();
    virtual void start();
    virtual void stop();
    virtual bool canContinueToUse();
    ~RestrictOpenDoorGoal();
    virtual void appendDebugInfo(std::string &)const;
    RestrictOpenDoorGoal(Mob &);
};
