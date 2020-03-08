#pragma once

#include "../Mob"


class AvoidMobGoal : Goal {

public:
    virtual AvoidMobGoal::~AvoidMobGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;
    virtual void findNearestEntityToAvoid(float);

    AvoidMobGoal(Mob &, float, float, float, float, float, bool);
};
