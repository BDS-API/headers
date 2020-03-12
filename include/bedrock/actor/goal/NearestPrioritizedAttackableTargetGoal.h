#pragma once

#include <string>
#include "NearestAttackableTargetGoal.h"
#include <vector>


class NearestPrioritizedAttackableTargetGoal : NearestAttackableTargetGoal {

public:
    ~NearestPrioritizedAttackableTargetGoal();
    virtual void _findTarget(MobDescriptor const**);
    virtual void appendDebugInfo(std::string &)const;
    NearestPrioritizedAttackableTargetGoal(Mob &, std::vector<MobDescriptor> const&, float, int, bool, int, bool, bool, int, float, bool, int);
};
