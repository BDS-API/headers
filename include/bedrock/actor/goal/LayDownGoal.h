#pragma once

#include "../Mob"


class LayDownGoal : Goal {

public:
    virtual LayDownGoal::~LayDownGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    LayDownGoal(Mob &, int, int);
};
