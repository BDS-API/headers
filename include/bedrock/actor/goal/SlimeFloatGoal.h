#pragma once

#include <string>
#include "Goal.h"


class SlimeFloatGoal : Goal {

public:
    ~SlimeFloatGoal();
    virtual void appendDebugInfo(std::string &)const;
    virtual void tick();
    virtual bool canUse();
    SlimeFloatGoal(Mob &);
};
