#pragma once

#include <string>
#include "Goal.h"
#include <vector>


class SwimWithMobGoal : Goal {

public:
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canBeInterrupted();
    virtual bool canUse();
    virtual void start();
    ~SwimWithMobGoal();
    virtual bool canContinueToUse();
    SwimWithMobGoal(Mob &, float, float, int, std::vector<MobDescriptor> const&);
    void _canSwimWith(Actor &);
    void _setWantedMob();
};
