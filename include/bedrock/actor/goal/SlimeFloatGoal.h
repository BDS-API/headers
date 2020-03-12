#pragma once

#include "Goal.h"
#include "../Mob.h"
#include <string>


class SlimeFloatGoal : Goal {

public:
    ~SlimeFloatGoal();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canUse();
    SlimeFloatGoal(Mob &);
};
