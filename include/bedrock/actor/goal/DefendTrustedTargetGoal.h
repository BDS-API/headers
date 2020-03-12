#pragma once

#include <string>
#include "../../../unmapped/TrustComponent.h"
#include "../Mob.h"
#include "NearestAttackableTargetGoal.h"
#include <vector>
#include "../../../unmapped/MobDescriptor.h"
#include "../../definition/DefinitionTrigger.h"


class DefendTrustedTargetGoal : NearestAttackableTargetGoal {

public:
    virtual bool canUse();
    virtual void appendDebugInfo(std::string &)const;
    ~DefendTrustedTargetGoal();
    virtual void start();
    void _findTrustedTarget(TrustComponent const&);
//  DefendTrustedTargetGoal(Mob &, std::vector<MobDescriptor> const&, float, int, bool, int, LevelSoundEvent, DefinitionTrigger const&); //TODO: incomplete function definition
};
