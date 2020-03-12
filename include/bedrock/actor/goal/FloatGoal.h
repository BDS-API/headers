#pragma once

#include "Goal.h"
#include "../Mob.h"
#include <string>


class FloatGoal : Goal {

public:
    virtual void appendDebugInfo(std::string &)const;
    ~FloatGoal();
    virtual bool canUse();
    virtual void tick();
    FloatGoal(Mob &);
};
