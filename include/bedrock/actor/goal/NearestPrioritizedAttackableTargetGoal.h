#pragma once

#include "../../../unmapped/MobDescriptor"
#include "../Mob"


class NearestPrioritizedAttackableTargetGoal : NearestAttackableTargetGoal {

public:
    NearestPrioritizedAttackableTargetGoal::~NearestPrioritizedAttackableTargetGoal()
    virtual void appendDebugInfo(std::string &)const;
    virtual void _findTarget(MobDescriptor const**);

    NearestPrioritizedAttackableTargetGoal(Mob &, std::vector<MobDescriptor, std::allocator<MobDescriptor>> const&, float, int, bool, int, bool, bool, int, float, bool, int);
};
