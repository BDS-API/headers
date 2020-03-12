#pragma once

#include <string>
#include "Goal.h"


class RangedAttackGoal : Goal {

public:
    virtual void start();
    ~RangedAttackGoal();
    virtual void appendDebugInfo(std::string &)const;
    virtual void tick();
    virtual bool canContinueToUse();
    virtual void stop();
    virtual bool canUse();
    RangedAttackGoal(Mob &, float, float, int, int, float, int, int, int, int);
    void handleChargeData();
    void handleAttackBehavior(Actor *, Vec3 const&, float, bool);
    void _holdingUnchargedChargedItem()const;
    void determinePlaySound();
    void setAttackInterval(int);
    void _dischargeCarriedItem();
};
