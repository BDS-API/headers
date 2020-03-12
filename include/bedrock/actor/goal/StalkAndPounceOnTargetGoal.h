#pragma once

#include <string>
#include "../../util/Vec3.h"
#include "../Mob.h"
#include "../unmapped/ActorFilterGroup.h"
#include "Goal.h"
#include "../../util/BlockPos.h"


class StalkAndPounceOnTargetGoal : Goal {

public:
    virtual bool canBeInterrupted();
    virtual void start();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canContinueToUse();
    ~StalkAndPounceOnTargetGoal();
    virtual bool canUse();
    virtual void stop();
    void _stalkPrey(Vec3 const&, Vec3 const&);
    void _isStuckBlock(BlockPos)const;
    void _attemptToStrike(Vec3 const&, Vec3 const&);
    void _stuck();
    void _pounce(Vec3 const&, Vec3 const&)const;
    void _isPouncePathClear(Vec3 const&, Vec3 const&)const;
    void _hasPreyDiedMidAir()const;
    StalkAndPounceOnTargetGoal(Mob &, ActorFilterGroup const&, float, float, float, float, float, float, float, float);
    void _preparePounce(Vec3 const&, Vec3 const&);
};
