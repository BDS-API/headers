#pragma once

#include <string>
#include "Goal.h"


class SlimeRandomDirectionGoal : Goal {

public:
    virtual bool canUse();
    ~SlimeRandomDirectionGoal();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;
    SlimeRandomDirectionGoal(Mob &);
};
