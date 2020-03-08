#pragma once

#include "../Mob"
#include "../../../unmapped/TrustComponent"


class DefendTrustedTargetGoal : NearestAttackableTargetGoal {

public:
    virtual DefendTrustedTargetGoal::~DefendTrustedTargetGoal();
    virtual bool canUse(void);
    virtual void start(void);
    virtual void appendDebugInfo(std::string &)const;

    DefendTrustedTargetGoal(Mob &, std::vector<MobDescriptor, std::allocator<MobDescriptor>> const&, float, int, bool, int, LevelSoundEvent, DefinitionTrigger const&);
    void _findTrustedTarget(TrustComponent const&);
};
