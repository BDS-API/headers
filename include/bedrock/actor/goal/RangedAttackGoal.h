#pragma once

#include <string>
#include "Goal.h"


class RangedAttackGoal : Goal {

public:
    ~RangedAttackGoal(); // _ZN16RangedAttackGoalD2Ev
    virtual bool canUse(); // _ZN16RangedAttackGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN16RangedAttackGoal16canContinueToUseEv
    virtual void start(); // _ZN16RangedAttackGoal5startEv
    virtual void stop(); // _ZN16RangedAttackGoal4stopEv
    virtual void tick(); // _ZN16RangedAttackGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK16RangedAttackGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    RangedAttackGoal(Mob &, float, float, int, int, float, int, int, int, int); // _ZN16RangedAttackGoalC2ER3Mobffiifiiii
    void _holdingUnchargedChargedItem()const; // _ZNK16RangedAttackGoal28_holdingUnchargedChargedItemEv
    void handleAttackBehavior(Actor *, Vec3 const&, float, bool); // _ZN16RangedAttackGoal20handleAttackBehaviorEP5ActorRK4Vec3fb
    void _dischargeCarriedItem(); // _ZN16RangedAttackGoal21_dischargeCarriedItemEv
    void handleChargeData(); // _ZN16RangedAttackGoal16handleChargeDataEv
    void determinePlaySound(); // _ZN16RangedAttackGoal18determinePlaySoundEv
    void setAttackInterval(int); // _ZN16RangedAttackGoal17setAttackIntervalEi
};
