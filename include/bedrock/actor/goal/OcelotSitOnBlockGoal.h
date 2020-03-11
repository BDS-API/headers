#pragma once

#include "../../util/BlockPos.h"
#include "./BaseMoveToBlockGoal.h"
#include "../../block/unmapped/BlockSource.h"
#include "../Mob.h"
#include <string>


class OcelotSitOnBlockGoal : BaseMoveToBlockGoal {

public:
    virtual ~OcelotSitOnBlockGoal();
    virtual bool canUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool isValidTarget(BlockSource &, BlockPos const&);

    OcelotSitOnBlockGoal(Mob *, float);
};
