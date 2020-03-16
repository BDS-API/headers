#pragma once

#include "NearestAttackableTargetGoal.h"
#include <string>
#include <vector>


class DefendTrustedTargetGoal : public NearestAttackableTargetGoal {

public:
    virtual ~DefendTrustedTargetGoal(); // _ZN23DefendTrustedTargetGoalD2Ev
    virtual void __fake_function0(); // fake
    virtual bool canUse(); // _ZN23DefendTrustedTargetGoal6canUseEv
    virtual void start(); // _ZN23DefendTrustedTargetGoal5startEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK23DefendTrustedTargetGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//    DefendTrustedTargetGoal(Mob &, std::vector<MobDescriptor> const&, float, int, bool, int, long, DefinitionTrigger const&); //TODO: incomplete function definition // _ZN23DefendTrustedTargetGoalC2ER3MobRKSt6vectorI13MobDescriptorSaIS3_EEfibi15LevelSoundEventRK17DefinitionTrigger
    void _findTrustedTarget(TrustComponent const&); // _ZN23DefendTrustedTargetGoal18_findTrustedTargetERK14TrustComponent
};
