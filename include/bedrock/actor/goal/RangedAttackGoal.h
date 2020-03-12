#pragma once

#include <string>
#include "../Actor.h"
#include "../../util/Vec3.h"
#include "../Mob.h"
#include "Goal.h"


class RangedAttackGoal : Goal {

public:
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    ~RangedAttackGoal();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canUse();
    void setAttackInterval(int);
    void determinePlaySound();
    RangedAttackGoal(Mob &, float, float, int, int, float, int, int, int, int);
    void _holdingUnchargedChargedItem()const;
    void handleAttackBehavior(Actor *, Vec3 const&, float, bool);
    void _dischargeCarriedItem();
    void handleChargeData();
};
