#pragma once

#include "./Goal.h"
#include "../Mob.h"
#include <string>


class FloatGoal : Goal {

public:
    virtual ~FloatGoal();
    virtual bool canUse();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    FloatGoal(Mob &);
};
