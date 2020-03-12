#pragma once

#include "Goal.h"
#include "../Mob.h"
#include <string>


class VexRandomMoveGoal : Goal {

public:
    ~VexRandomMoveGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void appendDebugInfo(std::string &)const;
    virtual void tick();
    VexRandomMoveGoal(Mob &);
};
