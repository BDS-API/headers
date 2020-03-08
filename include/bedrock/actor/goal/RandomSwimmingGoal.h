#pragma once

#include "../Mob"
#include "../../util/BlockPos"


class RandomSwimmingGoal : RandomStrollGoal {

public:
    virtual RandomSwimmingGoal::~RandomSwimmingGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void appendDebugInfo(std::string &)const;
    virtual void _setWantedPosition();

    RandomSwimmingGoal(Mob &, float, int, int, int);
    void _getWaterHeights(BlockPos, short &, float &, float &, float &);
};
