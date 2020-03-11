#pragma once

#include "./Goal.h"
#include "../Mob.h"
#include <string>


class SlimeKeepOnJumpingGoal : Goal {

public:
    virtual ~SlimeKeepOnJumpingGoal();
    virtual bool canUse();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    SlimeKeepOnJumpingGoal(Mob &);
};
