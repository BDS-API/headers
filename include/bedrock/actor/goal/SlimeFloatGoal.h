#pragma once

#include "./Goal.h"
#include "../Mob.h"
#include <string>


class SlimeFloatGoal : Goal {

public:
    virtual ~SlimeFloatGoal();
    virtual bool canUse();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    SlimeFloatGoal(Mob &);
};
