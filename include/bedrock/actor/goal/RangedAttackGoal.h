#pragma once

#include "../Mob"
#include "../Actor"
#include "../../util/Vec3"


class RangedAttackGoal : Goal {

public:
    virtual RangedAttackGoal::~RangedAttackGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    RangedAttackGoal(Mob &, float, float, int, int, float, int, int, int, int);
    void _holdingUnchargedChargedItem()const;
    void handleAttackBehavior(Actor *, Vec3 const&, float, bool);
    void _dischargeCarriedItem();
    void handleChargeData();
    void determinePlaySound();
    void setAttackInterval(int);
};
