#pragma once

#include <string>
#include "Goal.h"


class VexRandomMoveGoal : Goal {

public:
    virtual bool canContinueToUse();
    ~VexRandomMoveGoal();
    virtual bool canUse();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;
    VexRandomMoveGoal(Mob &);
};
