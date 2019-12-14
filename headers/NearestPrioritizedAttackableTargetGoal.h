#pragma once

class NearestPrioritizedAttackableTargetGoal : NearestAttackableTargetGoal {

public:
    virtual ~NearestPrioritizedAttackableTargetGoal();
    virtual void appendDebugInfo(std::string &)const;
    virtual void _findTarget(MobDescriptor const**);

    void NearestPrioritizedAttackableTargetGoal(Mob &, std::vector<MobDescriptor, std::allocator<MobDescriptor>> const&, float, int, bool, int, bool, bool, int, float, bool, int);
};
