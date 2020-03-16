#pragma once

#include <string>
#include "Goal.h"


class SquidMoveAwayFromGroundGoal : public Goal {

public:
    virtual ~SquidMoveAwayFromGroundGoal(); // _ZN27SquidMoveAwayFromGroundGoalD2Ev
    virtual void __fake_function0(); // fake
    virtual bool canUse(); // _ZN27SquidMoveAwayFromGroundGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN27SquidMoveAwayFromGroundGoal16canContinueToUseEv
    virtual void start(); // _ZN27SquidMoveAwayFromGroundGoal5startEv
    virtual void stop(); // _ZN27SquidMoveAwayFromGroundGoal4stopEv
    virtual void tick(); // _ZN27SquidMoveAwayFromGroundGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK27SquidMoveAwayFromGroundGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    SquidMoveAwayFromGroundGoal(Squid &); // _ZN27SquidMoveAwayFromGroundGoalC2ER5Squid
};
