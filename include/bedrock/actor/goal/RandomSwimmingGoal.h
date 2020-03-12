#pragma once

#include "../../util/BlockPos.h"
#include "RandomStrollGoal.h"
#include "../Mob.h"
#include <string>


class RandomSwimmingGoal : RandomStrollGoal {

public:
    virtual bool canUse();
    virtual void _setWantedPosition();
    ~RandomSwimmingGoal();
    virtual bool canContinueToUse();
    virtual void appendDebugInfo(std::string &)const;
    void _getWaterHeights(BlockPos, short &, float &, float &, float &);
    RandomSwimmingGoal(Mob &, float, int, int, int);
};
