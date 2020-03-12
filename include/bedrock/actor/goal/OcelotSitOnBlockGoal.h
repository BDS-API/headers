#pragma once

#include <string>
#include "../../block/unmapped/BlockSource.h"
#include "../Mob.h"
#include "BaseMoveToBlockGoal.h"
#include "../../util/BlockPos.h"


class OcelotSitOnBlockGoal : BaseMoveToBlockGoal {

public:
    virtual bool canUse();
    ~OcelotSitOnBlockGoal();
    virtual void start();
    virtual void appendDebugInfo(std::string &)const;
    virtual void stop();
    virtual bool isValidTarget(BlockSource &, BlockPos const&);
    virtual void tick();
    OcelotSitOnBlockGoal(Mob *, float);
};
