#pragma once

#include "Goal.h"
#include "../Mob.h"
#include <string>


class ShulkerPeekGoal : Goal {

public:
    virtual bool canContinueToUse();
    virtual void appendDebugInfo(std::string &)const;
    virtual void tick();
    virtual bool canUse();
    ~ShulkerPeekGoal();
    virtual void stop();
    virtual void start();
    ShulkerPeekGoal(Mob &);
};
