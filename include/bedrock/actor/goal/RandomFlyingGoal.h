#pragma once

#include "RandomStrollGoal.h"
#include <string>


class RandomFlyingGoal : public RandomStrollGoal {

public:
    virtual ~RandomFlyingGoal(); // _ZN16RandomFlyingGoalD2Ev
    virtual void __fake_function0(); // fake
    virtual bool canUse(); // _ZN16RandomFlyingGoal6canUseEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK16RandomFlyingGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void _setWantedPosition(); // _ZN16RandomFlyingGoal18_setWantedPositionEv
    RandomFlyingGoal(Mob &, float, int, int, bool); // _ZN16RandomFlyingGoalC2ER3Mobfiib
    void _getTreePos(Vec3 &)const; // _ZNK16RandomFlyingGoal11_getTreePosER4Vec3
};
