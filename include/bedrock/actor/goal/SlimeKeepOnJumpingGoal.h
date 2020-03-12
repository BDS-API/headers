#pragma once

#include <string>
#include "Goal.h"


class SlimeKeepOnJumpingGoal : Goal {

public:
    virtual void appendDebugInfo(std::string &)const;
    virtual void tick();
    ~SlimeKeepOnJumpingGoal();
    virtual bool canUse();
    SlimeKeepOnJumpingGoal(Mob &);
};
