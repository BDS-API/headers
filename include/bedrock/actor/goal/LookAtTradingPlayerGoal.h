#pragma once

#include "./LookAtActorGoal.h"
#include "../Mob.h"
#include <string>


class LookAtTradingPlayerGoal : LookAtActorGoal {

public:
    virtual ~LookAtTradingPlayerGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void appendDebugInfo(std::string &)const;

    LookAtTradingPlayerGoal(Mob &, float, float, int, int, int, int);
};
