#pragma once

#include <string>
#include "Goal.h"


class SwellGoal : Goal {

public:
    virtual bool canUse();
    virtual void stop();
    ~SwellGoal();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;
    virtual void start();
    SwellGoal(Creeper *, float, float);
};
