#pragma once

#include <string>
#include "Goal.h"


class TakeFlowerGoal : Goal {

public:
    virtual void tick();
    virtual void start();
    virtual bool canUse();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canContinueToUse();
    virtual void stop();
    ~TakeFlowerGoal();
    TakeFlowerGoal(Mob &);
};
