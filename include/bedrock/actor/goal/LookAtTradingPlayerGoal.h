#pragma once

#include "../Mob"


class LookAtTradingPlayerGoal : LookAtActorGoal {

public:
    LookAtTradingPlayerGoal::~LookAtTradingPlayerGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void appendDebugInfo(std::string &)const;

    LookAtTradingPlayerGoal(Mob &, float, float, int, int, int, int);
};
