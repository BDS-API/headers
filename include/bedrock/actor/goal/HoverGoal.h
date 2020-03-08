#pragma once

#include "../Mob"


class HoverGoal : Goal {

public:
    virtual HoverGoal::~HoverGoal()
    virtual bool canUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    HoverGoal(Mob &, float);
};
