#pragma once

#include "../Mob"


class PlayerRideTamedGoal : Goal {

public:
    virtual PlayerRideTamedGoal::~PlayerRideTamedGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    PlayerRideTamedGoal(Mob &);
};
