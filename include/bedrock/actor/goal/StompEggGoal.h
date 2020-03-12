#pragma once

#include <string>
#include "../../util/BlockPos.h"
#include "StompBlockGoal.h"


class StompEggGoal : StompBlockGoal {

public:
    virtual void _createBreakProgressParticles(Level &, BlockSource &, BlockPos);
    virtual void _createDestroyParticles(Level &, BlockSource &, BlockPos);
    virtual void _playDestroySound(Level &, BlockSource &, BlockPos);
    virtual void _playBreakProgressSound(Level &, BlockSource &, BlockPos);
    virtual void appendDebugInfo(std::string &)const;
    ~StompEggGoal();
    StompEggGoal(Mob &, double, int, int, int, float, int);
};
