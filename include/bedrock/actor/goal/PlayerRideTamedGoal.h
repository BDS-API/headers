#pragma once

#include "Goal.h"
#include "../Mob.h"
#include <string>


class PlayerRideTamedGoal : Goal {

public:
    virtual void start();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;
    ~PlayerRideTamedGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    PlayerRideTamedGoal(Mob &);
};
