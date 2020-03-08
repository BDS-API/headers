#pragma once

#include "../Mob"
#include "../../util/BlockPos"
#include "../../block/unmapped/BlockSource"


class OcelotSitOnBlockGoal : BaseMoveToBlockGoal {

public:
    OcelotSitOnBlockGoal::~OcelotSitOnBlockGoal()
    virtual bool canUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool isValidTarget(BlockSource &, BlockPos const&);

    OcelotSitOnBlockGoal(Mob *, float);
};
