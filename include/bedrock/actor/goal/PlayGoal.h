#pragma once

#include <string>
#include "Goal.h"


class PlayGoal : Goal {

public:
    virtual void appendDebugInfo(std::string &)const;
    virtual void stop();
    virtual void start();
    virtual bool canUse();
    virtual void tick();
    virtual bool canContinueToUse();
    ~PlayGoal();
    PlayGoal(Villager &, float);
};
