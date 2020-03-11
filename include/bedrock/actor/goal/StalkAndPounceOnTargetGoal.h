#pragma once

#include "../unmapped/ActorFilterGroup.h"
#include "../../util/Vec3.h"
#include "../../util/BlockPos.h"
#include "./Goal.h"
#include "../Mob.h"
#include <string>


class StalkAndPounceOnTargetGoal : Goal {

public:
    virtual ~StalkAndPounceOnTargetGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual bool canBeInterrupted();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    StalkAndPounceOnTargetGoal(Mob &, ActorFilterGroup const&, float, float, float, float, float, float, float, float);
    void _stalkPrey(Vec3 const&, Vec3 const&);
    void _preparePounce(Vec3 const&, Vec3 const&);
    void _attemptToStrike(Vec3 const&, Vec3 const&);
    void _hasPreyDiedMidAir()const;
    void _isStuckBlock(BlockPos)const;
    void _stuck();
    void _pounce(Vec3 const&, Vec3 const&)const;
    void _isPouncePathClear(Vec3 const&, Vec3 const&)const;
};
