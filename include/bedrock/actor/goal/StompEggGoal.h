#pragma once

#include "../Mob"
#include "../../util/BlockPos"
#include "../../block/unmapped/BlockSource"
#include "../../level/Level"


class StompEggGoal : StompBlockGoal {

public:
    StompEggGoal::~StompEggGoal()
    virtual void appendDebugInfo(std::string &)const;
    virtual void _createBreakProgressParticles(Level &, BlockSource &, BlockPos);
    virtual void _createDestroyParticles(Level &, BlockSource &, BlockPos);
    virtual void _playBreakProgressSound(Level &, BlockSource &, BlockPos);
    virtual void _playDestroySound(Level &, BlockSource &, BlockPos);

    StompEggGoal(Mob &, double, int, int, int, float, int);
};
