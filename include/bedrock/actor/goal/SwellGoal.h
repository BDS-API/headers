#pragma once

#include <string>
#include "Goal.h"
#include "../Creeper.h"


class SwellGoal : Goal {

public:
    ~SwellGoal();
    virtual void stop();
    virtual void start();
    virtual bool canUse();
    virtual void appendDebugInfo(std::string &)const;
    virtual void tick();
    SwellGoal(Creeper *, float, float);
};
