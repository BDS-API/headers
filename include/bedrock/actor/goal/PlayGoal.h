#pragma once

#include "./Goal.h"
#include "../Villager.h"
#include <string>


class PlayGoal : Goal {

public:
    virtual ~PlayGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    PlayGoal(Villager &, float);
};
