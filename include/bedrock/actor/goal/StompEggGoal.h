#pragma once

#include <string>
#include "StompBlockGoal.h"
#include "../../block/unmapped/BlockSource.h"
#include "../Mob.h"
#include "../../level/Level.h"
#include "../../util/BlockPos.h"


class StompEggGoal : StompBlockGoal {

public:
    virtual void _createDestroyParticles(Level &, BlockSource &, BlockPos);
    virtual void _playDestroySound(Level &, BlockSource &, BlockPos);
    ~StompEggGoal();
    virtual void _createBreakProgressParticles(Level &, BlockSource &, BlockPos);
    virtual void appendDebugInfo(std::string &)const;
    virtual void _playBreakProgressSound(Level &, BlockSource &, BlockPos);
    StompEggGoal(Mob &, double, int, int, int, float, int);
};
