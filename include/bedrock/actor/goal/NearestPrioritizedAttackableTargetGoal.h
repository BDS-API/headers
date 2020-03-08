#pragma once

#include "../Mob"
#include "../../../unmapped/MobDescriptor"


class NearestPrioritizedAttackableTargetGoal : NearestAttackableTargetGoal {

public:
    virtual NearestPrioritizedAttackableTargetGoal::~NearestPrioritizedAttackableTargetGoal()
    virtual void appendDebugInfo(std::string &)const;
    virtual void _findTarget(MobDescriptor const**);

    NearestPrioritizedAttackableTargetGoal(Mob &, std::vector<MobDescriptor, std::allocator<MobDescriptor>> const&, float, int, bool, int, bool, bool, int, float, bool, int);
};
