#pragma once

#include "../Mob"
#include "../../block/unmapped/BlockSource"
#include "../../util/BlockPos"


class OcelotSitOnBlockGoal : BaseMoveToBlockGoal {

public:
    virtual OcelotSitOnBlockGoal::~OcelotSitOnBlockGoal()
    virtual bool canUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool isValidTarget(BlockSource &, BlockPos const&);

    OcelotSitOnBlockGoal(Mob *, float);
};
