#pragma once

#include <string>
#include "NearestAttackableTargetGoal.h"
#include <vector>


class DefendTrustedTargetGoal : NearestAttackableTargetGoal {

public:
    ~DefendTrustedTargetGoal(); // _ZN23DefendTrustedTargetGoalD2Ev
    virtual bool canUse(); // _ZN23DefendTrustedTargetGoal6canUseEv
    virtual void start(); // _ZN23DefendTrustedTargetGoal5startEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK23DefendTrustedTargetGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//  DefendTrustedTargetGoal(Mob &, std::vector<MobDescriptor> const&, float, int, bool, int, LevelSoundEvent, DefinitionTrigger const&); //TODO: incomplete function definition // _ZN23DefendTrustedTargetGoalC2ER3MobRKSt6vectorI13MobDescriptorSaIS3_EEfibi15LevelSoundEventRK17DefinitionTrigger
    void _findTrustedTarget(TrustComponent const&); // _ZN23DefendTrustedTargetGoal18_findTrustedTargetERK14TrustComponent
};
