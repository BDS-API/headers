#pragma once

#include "Goal.h"
#include "../Mob.h"
#include <string>


class SlimeKeepOnJumpingGoal : Goal {

public:
    virtual bool canUse();
    ~SlimeKeepOnJumpingGoal();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;
    SlimeKeepOnJumpingGoal(Mob &);
};
