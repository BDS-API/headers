#pragma once

#include "../../definition/DefinitionTrigger.h"
#include "./NearestAttackableTargetGoal.h"
#include <memory>
#include "../../../unmapped/MobDescriptor.h"
#include "../../../unmapped/TrustComponent.h"
#include <vector>
#include "../Mob.h"
#include <string>


class DefendTrustedTargetGoal : NearestAttackableTargetGoal {

public:
    virtual ~DefendTrustedTargetGoal();
    virtual bool canUse();
    virtual void start();
    virtual void appendDebugInfo(std::string &)const;

//  DefendTrustedTargetGoal(Mob &, std::vector<MobDescriptor, std::allocator<MobDescriptor>> const&, float, int, bool, int, LevelSoundEvent, DefinitionTrigger const&); //TODO: incomplete function definition
    void _findTrustedTarget(TrustComponent const&);
};
