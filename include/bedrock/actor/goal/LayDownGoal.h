#pragma once

#include "../Mob"


class LayDownGoal : Goal {

public:
    virtual LayDownGoal::~LayDownGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    LayDownGoal(Mob &, int, int);
};
