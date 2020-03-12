#pragma once

#include <string>
#include "Goal.h"


class ShulkerPeekGoal : Goal {

public:
    virtual void tick();
    ~ShulkerPeekGoal();
    virtual void start();
    virtual void stop();
    virtual bool canUse();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canContinueToUse();
    ShulkerPeekGoal(Mob &);
};
