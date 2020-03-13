#pragma once

#include <string>
#include "../../util/BlockPos.h"
#include "Goal.h"


class StalkAndPounceOnTargetGoal : Goal {

public:
    ~StalkAndPounceOnTargetGoal(); // _ZN26StalkAndPounceOnTargetGoalD2Ev
    virtual bool canUse(); // _ZN26StalkAndPounceOnTargetGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN26StalkAndPounceOnTargetGoal16canContinueToUseEv
    virtual bool canBeInterrupted(); // _ZN26StalkAndPounceOnTargetGoal16canBeInterruptedEv
    virtual void start(); // _ZN26StalkAndPounceOnTargetGoal5startEv
    virtual void stop(); // _ZN26StalkAndPounceOnTargetGoal4stopEv
    virtual void tick(); // _ZN26StalkAndPounceOnTargetGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK26StalkAndPounceOnTargetGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    StalkAndPounceOnTargetGoal(Mob &, ActorFilterGroup const&, float, float, float, float, float, float, float, float); // _ZN26StalkAndPounceOnTargetGoalC2ER3MobRK16ActorFilterGroupffffffff
    void _stalkPrey(Vec3 const&, Vec3 const&); // _ZN26StalkAndPounceOnTargetGoal10_stalkPreyERK4Vec3S2_
    void _preparePounce(Vec3 const&, Vec3 const&); // _ZN26StalkAndPounceOnTargetGoal14_preparePounceERK4Vec3S2_
    void _attemptToStrike(Vec3 const&, Vec3 const&); // _ZN26StalkAndPounceOnTargetGoal16_attemptToStrikeERK4Vec3S2_
    void _hasPreyDiedMidAir()const; // _ZNK26StalkAndPounceOnTargetGoal18_hasPreyDiedMidAirEv
    void _isStuckBlock(BlockPos)const; // _ZNK26StalkAndPounceOnTargetGoal13_isStuckBlockE8BlockPos
    void _stuck(); // _ZN26StalkAndPounceOnTargetGoal6_stuckEv
    void _pounce(Vec3 const&, Vec3 const&)const; // _ZNK26StalkAndPounceOnTargetGoal7_pounceERK4Vec3S2_
    void _isPouncePathClear(Vec3 const&, Vec3 const&)const; // _ZNK26StalkAndPounceOnTargetGoal18_isPouncePathClearERK4Vec3S2_
};
