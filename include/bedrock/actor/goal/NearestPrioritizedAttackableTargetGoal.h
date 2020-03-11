#pragma once

#include "./NearestAttackableTargetGoal.h"
#include <memory>
#include "../../../unmapped/MobDescriptor.h"
#include <vector>
#include "../Mob.h"
#include <string>


class NearestPrioritizedAttackableTargetGoal : NearestAttackableTargetGoal {

public:
    virtual ~NearestPrioritizedAttackableTargetGoal();
    virtual void appendDebugInfo(std::string &)const;
    virtual void _findTarget(MobDescriptor const**);

    NearestPrioritizedAttackableTargetGoal(Mob &, std::vector<MobDescriptor, std::allocator<MobDescriptor>> const&, float, int, bool, int, bool, bool, int, float, bool, int);
};
