#pragma once

#include "./Goal.h"
#include "../Mob.h"
#include <string>


class PlayerRideTamedGoal : Goal {

public:
    virtual ~PlayerRideTamedGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    PlayerRideTamedGoal(Mob &);
};
