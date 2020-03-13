#pragma once

#include <string>
#include "../../util/BlockPos.h"
#include "RandomStrollGoal.h"


class RandomSwimmingGoal : RandomStrollGoal {

public:
    ~RandomSwimmingGoal(); // _ZN18RandomSwimmingGoalD2Ev
    virtual bool canUse(); // _ZN18RandomSwimmingGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN18RandomSwimmingGoal16canContinueToUseEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK18RandomSwimmingGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void _setWantedPosition(); // _ZN18RandomSwimmingGoal18_setWantedPositionEv
    RandomSwimmingGoal(Mob &, float, int, int, int); // _ZN18RandomSwimmingGoalC2ER3Mobfiii
    void _getWaterHeights(BlockPos, short &, float &, float &, float &); // _ZN18RandomSwimmingGoal16_getWaterHeightsE8BlockPosRsRfS2_S2_
};
