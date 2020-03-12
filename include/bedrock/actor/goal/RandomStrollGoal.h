#pragma once

#include <string>
#include "Goal.h"


class RandomStrollGoal : Goal {

public:
    virtual void _setWantedPosition();
    virtual void start();
    virtual bool canContinueToUse();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canUse();
    ~RandomStrollGoal();
    virtual void stop();
    RandomStrollGoal(Mob &, float, int, int, int);
};
