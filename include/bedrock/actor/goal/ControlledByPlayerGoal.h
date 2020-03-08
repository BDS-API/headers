#pragma once

#include "../Mob"


class ControlledByPlayerGoal : Goal {

public:
    ControlledByPlayerGoal::~ControlledByPlayerGoal()
    virtual bool canUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    ControlledByPlayerGoal(Mob &);
    void _canBeControlledByRider();
};
