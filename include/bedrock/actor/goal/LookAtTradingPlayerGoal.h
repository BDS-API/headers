#pragma once

#include <string>
#include "LookAtActorGoal.h"


class LookAtTradingPlayerGoal : LookAtActorGoal {

public:
    virtual bool canContinueToUse();
    virtual bool canUse();
    virtual void appendDebugInfo(std::string &)const;
    ~LookAtTradingPlayerGoal();
    LookAtTradingPlayerGoal(Mob &, float, float, int, int, int, int);
};
