#pragma once

#include <string>
#include "Goal.h"


class FloatGoal : Goal {

public:
    virtual void appendDebugInfo(std::string &)const;
    virtual void tick();
    virtual bool canUse();
    ~FloatGoal();
    FloatGoal(Mob &);
};
