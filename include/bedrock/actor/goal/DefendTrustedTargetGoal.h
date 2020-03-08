#pragma once

#include "../Mob"
#include "../../definition/DefinitionTrigger"
#include "../../../unmapped/TrustComponent"
#include "../../../unmapped/MobDescriptor"


class DefendTrustedTargetGoal : NearestAttackableTargetGoal {

public:
    virtual DefendTrustedTargetGoal::~DefendTrustedTargetGoal()
    virtual bool canUse();
    virtual void start();
    virtual void appendDebugInfo(std::string &)const;

    DefendTrustedTargetGoal(Mob &, std::vector<MobDescriptor, std::allocator<MobDescriptor>> const&, float, int, bool, int, LevelSoundEvent, DefinitionTrigger const&);
    void _findTrustedTarget(TrustComponent const&);
};
