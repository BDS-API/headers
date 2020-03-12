#pragma once

#include "Goal.h"
#include "../Mob.h"
#include <string>


class TakeFlowerGoal : Goal {

public:
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canContinueToUse();
    virtual void stop();
    virtual void start();
    virtual bool canUse();
    virtual void tick();
    ~TakeFlowerGoal();
    TakeFlowerGoal(Mob &);
};
