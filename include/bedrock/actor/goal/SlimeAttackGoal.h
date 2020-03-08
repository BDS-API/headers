#pragma once

#include "../Mob"


class SlimeAttackGoal : Goal {

public:
    virtual SlimeAttackGoal::~SlimeAttackGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    SlimeAttackGoal(Mob &);
};
