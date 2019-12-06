#pragma once

class NearestPrioritizedAttackableTargetGoal : NearestAttackableTargetGoal {

public:
    virtual ~NearestPrioritizedAttackableTargetGoal();
    virtual void appendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void _findTarget(MobDescriptor const**);

    void NearestPrioritizedAttackableTargetGoal(Mob &, std::vector<MobDescriptor, std::allocator<MobDescriptor>> const&, float, int, bool, int, bool, bool, int, float, bool, int);
};
