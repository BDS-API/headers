#pragma once

#include <string>
#include "../../util/Vec3.h"
#include "Goal.h"
#include "../../util/Vec2.h"


class BreedGoal : Goal {

public:
    ~BreedGoal(); // _ZN9BreedGoalD2Ev
    virtual bool canUse(); // _ZN9BreedGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN9BreedGoal16canContinueToUseEv
    virtual void stop(); // _ZN9BreedGoal4stopEv
    virtual void tick(); // _ZN9BreedGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK9BreedGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    BreedGoal(Mob &, float); // _ZN9BreedGoalC2ER3Mobf
    void _moveToFreePartner()const; // _ZNK9BreedGoal18_moveToFreePartnerEv
    void _isCloseEnoughToBreed(Vec3, Vec2, Vec3, Vec2)const; // _ZNK9BreedGoal21_isCloseEnoughToBreedE4Vec34Vec2S0_S1_
    void _breed(); // _ZN9BreedGoal6_breedEv
};
