#pragma once

#include <string>
#include "NearestAttackableTargetGoal.h"
#include <vector>


class DefendTrustedTargetGoal : NearestAttackableTargetGoal {

public:
    ~DefendTrustedTargetGoal();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canUse();
    virtual void start();
//  DefendTrustedTargetGoal(Mob &, std::vector<MobDescriptor> const&, float, int, bool, int, LevelSoundEvent, DefinitionTrigger const&); //TODO: incomplete function definition
    void _findTrustedTarget(TrustComponent const&);
};
