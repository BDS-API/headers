#pragma once

#include <string>
#include "Goal.h"


class OfferFlowerGoal : Goal {

public:
    ~OfferFlowerGoal(); // _ZN15OfferFlowerGoalD2Ev
    virtual bool canUse(); // _ZN15OfferFlowerGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN15OfferFlowerGoal16canContinueToUseEv
    virtual void start(); // _ZN15OfferFlowerGoal5startEv
    virtual void stop(); // _ZN15OfferFlowerGoal4stopEv
    virtual void tick(); // _ZN15OfferFlowerGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK15OfferFlowerGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    OfferFlowerGoal(IronGolem &); // _ZN15OfferFlowerGoalC2ER9IronGolem
};
