#pragma once

#include "../../level/Level.h"
#include "../../util/BlockPos.h"
#include "../../block/unmapped/BlockSource.h"
#include "./StompBlockGoal.h"
#include "../Mob.h"
#include <string>


class StompEggGoal : StompBlockGoal {

public:
    virtual ~StompEggGoal();
    virtual void appendDebugInfo(std::string &)const;
    virtual void _createBreakProgressParticles(Level &, BlockSource &, BlockPos);
    virtual void _createDestroyParticles(Level &, BlockSource &, BlockPos);
    virtual void _playBreakProgressSound(Level &, BlockSource &, BlockPos);
    virtual void _playDestroySound(Level &, BlockSource &, BlockPos);

    StompEggGoal(Mob &, double, int, int, int, float, int);
};
