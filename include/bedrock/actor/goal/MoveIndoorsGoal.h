#pragma once

#include <string>
#include "Goal.h"


class MoveIndoorsGoal : Goal {

public:
    ~MoveIndoorsGoal(); // _ZN15MoveIndoorsGoalD2Ev
    virtual bool canUse(); // _ZN15MoveIndoorsGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN15MoveIndoorsGoal16canContinueToUseEv
    virtual void start(); // _ZN15MoveIndoorsGoal5startEv
    virtual void stop(); // _ZN15MoveIndoorsGoal4stopEv
    virtual void tick(); // _ZN15MoveIndoorsGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK15MoveIndoorsGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    MoveIndoorsGoal(Mob &, float, float); // _ZN15MoveIndoorsGoalC2ER3Mobff
    void _startPathfinding(); // _ZN15MoveIndoorsGoal17_startPathfindingEv
    void _isInside(BlockPos const&); // _ZN15MoveIndoorsGoal9_isInsideERK8BlockPos
};
