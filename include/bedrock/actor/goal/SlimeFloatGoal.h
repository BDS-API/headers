#pragma once

#include "../Mob"


class SlimeFloatGoal : Goal {

public:
    SlimeFloatGoal::~SlimeFloatGoal()
    virtual bool canUse();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    SlimeFloatGoal(Mob &);
};
