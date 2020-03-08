#pragma once

#include "../Mob"


class RandomStrollGoal : Goal {

public:
    virtual RandomStrollGoal::~RandomStrollGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;
    virtual void _setWantedPosition();

    RandomStrollGoal(Mob &, float, int, int, int);
};
