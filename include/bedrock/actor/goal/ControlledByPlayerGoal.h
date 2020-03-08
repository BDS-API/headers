#pragma once

#include "../Mob"


class ControlledByPlayerGoal : Goal {

public:
    virtual ControlledByPlayerGoal::~ControlledByPlayerGoal();
    virtual bool canUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    ControlledByPlayerGoal(Mob &);
    void _canBeControlledByRider(void);
};
