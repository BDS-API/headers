#pragma once

#include <string>
#include "../../util/BlockPos.h"
#include "RandomStrollGoal.h"


class RandomSwimmingGoal : RandomStrollGoal {

public:
    virtual void appendDebugInfo(std::string &)const;
    ~RandomSwimmingGoal();
    virtual void _setWantedPosition();
    virtual bool canContinueToUse();
    virtual bool canUse();
    RandomSwimmingGoal(Mob &, float, int, int, int);
    void _getWaterHeights(BlockPos, short &, float &, float &, float &);
};
