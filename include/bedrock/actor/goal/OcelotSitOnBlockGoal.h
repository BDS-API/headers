#pragma once

#include <string>
#include "BaseMoveToBlockGoal.h"


class OcelotSitOnBlockGoal : BaseMoveToBlockGoal {

public:
    virtual void start();
    ~OcelotSitOnBlockGoal();
    virtual void tick();
    virtual bool isValidTarget(BlockSource &, BlockPos const&);
    virtual void stop();
    virtual bool canUse();
    virtual void appendDebugInfo(std::string &)const;
    OcelotSitOnBlockGoal(Mob *, float);
};
