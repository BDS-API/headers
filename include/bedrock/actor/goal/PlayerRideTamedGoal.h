#pragma once

#include <string>
#include "Goal.h"


class PlayerRideTamedGoal : Goal {

public:
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void tick();
    ~PlayerRideTamedGoal();
    virtual void start();
    virtual void appendDebugInfo(std::string &)const;
    PlayerRideTamedGoal(Mob &);
};
