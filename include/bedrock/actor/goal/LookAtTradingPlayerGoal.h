#pragma once

#include "../Mob.h"
#include <string>
#include "LookAtActorGoal.h"


class LookAtTradingPlayerGoal : LookAtActorGoal {

public:
    virtual void appendDebugInfo(std::string &)const;
    ~LookAtTradingPlayerGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    LookAtTradingPlayerGoal(Mob &, float, float, int, int, int, int);
};
