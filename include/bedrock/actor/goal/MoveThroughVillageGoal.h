#pragma once

#include "../Mob"


class MoveThroughVillageGoal : Goal {

public:
    MoveThroughVillageGoal::~MoveThroughVillageGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void appendDebugInfo(std::string &)const;

    MoveThroughVillageGoal(Mob &, float, bool);
};
