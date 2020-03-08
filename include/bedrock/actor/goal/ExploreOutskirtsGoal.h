#pragma once

#include "../Mob"


class ExploreOutskirtsGoal : Goal {

public:
    virtual ExploreOutskirtsGoal::~ExploreOutskirtsGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    ExploreOutskirtsGoal(Mob &, float, float, int);
};
