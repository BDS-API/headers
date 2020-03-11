#pragma once

#include "./Goal.h"
#include "../Mob.h"
#include <string>


class RandomStrollGoal : Goal {

public:
    virtual ~RandomStrollGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;
    virtual void _setWantedPosition();

    RandomStrollGoal(Mob &, float, int, int, int);
};
