#pragma once

#include <string>
#include "../../util/BlockPos.h"
#include "Goal.h"


class StalkAndPounceOnTargetGoal : Goal {

public:
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canUse();
    virtual bool canBeInterrupted();
    virtual void tick();
    virtual void stop();
    virtual void start();
    virtual bool canContinueToUse();
    ~StalkAndPounceOnTargetGoal();
    void _preparePounce(Vec3 const&, Vec3 const&);
    void _stalkPrey(Vec3 const&, Vec3 const&);
    void _isStuckBlock(BlockPos)const;
    void _hasPreyDiedMidAir()const;
    void _attemptToStrike(Vec3 const&, Vec3 const&);
    void _pounce(Vec3 const&, Vec3 const&)const;
    void _stuck();
    StalkAndPounceOnTargetGoal(Mob &, ActorFilterGroup const&, float, float, float, float, float, float, float, float);
    void _isPouncePathClear(Vec3 const&, Vec3 const&)const;
};
