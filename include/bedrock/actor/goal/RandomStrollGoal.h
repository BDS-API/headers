#pragma once

#include "Goal.h"
#include "../Mob.h"
#include <string>


class RandomStrollGoal : Goal {

public:
    virtual void _setWantedPosition();
    virtual void tick();
    virtual void start();
    virtual bool canContinueToUse();
    virtual void appendDebugInfo(std::string &)const;
    virtual void stop();
    virtual bool canUse();
    ~RandomStrollGoal();
    RandomStrollGoal(Mob &, float, int, int, int);
};
