#pragma once

#include "./Goal.h"
#include "../Mob.h"
#include <string>


class SlimeRandomDirectionGoal : Goal {

public:
    virtual ~SlimeRandomDirectionGoal();
    virtual bool canUse();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    SlimeRandomDirectionGoal(Mob &);
};
