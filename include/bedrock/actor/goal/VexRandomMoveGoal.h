#pragma once

#include "./Goal.h"
#include "../Mob.h"
#include <string>


class VexRandomMoveGoal : Goal {

public:
    virtual ~VexRandomMoveGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    VexRandomMoveGoal(Mob &);
};
