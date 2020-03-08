#pragma once

#include "../Mob"


class PlayerRideTamedGoal : Goal {

public:
    virtual PlayerRideTamedGoal::~PlayerRideTamedGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    PlayerRideTamedGoal(Mob &);
};
