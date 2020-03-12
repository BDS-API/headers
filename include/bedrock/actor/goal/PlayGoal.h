#pragma once

#include "../Villager.h"
#include "Goal.h"
#include <string>


class PlayGoal : Goal {

public:
    virtual void start();
    virtual void appendDebugInfo(std::string &)const;
    virtual void tick();
    ~PlayGoal();
    virtual bool canContinueToUse();
    virtual bool canUse();
    virtual void stop();
    PlayGoal(Villager &, float);
};
