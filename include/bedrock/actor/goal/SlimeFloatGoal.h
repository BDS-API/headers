#pragma once

#include "../Mob"


class SlimeFloatGoal : Goal {

public:
    virtual SlimeFloatGoal::~SlimeFloatGoal();
    virtual bool canUse(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    SlimeFloatGoal(Mob &);
};
