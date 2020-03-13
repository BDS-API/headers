#pragma once

#include <string>
#include "NearestAttackableTargetGoal.h"
#include <vector>


class NearestPrioritizedAttackableTargetGoal : NearestAttackableTargetGoal {

public:
    ~NearestPrioritizedAttackableTargetGoal(); // _ZN38NearestPrioritizedAttackableTargetGoalD2Ev
    virtual void appendDebugInfo(std::string &)const; // _ZNK38NearestPrioritizedAttackableTargetGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void _findTarget(MobDescriptor const**); // _ZN38NearestPrioritizedAttackableTargetGoal11_findTargetEPPK13MobDescriptor
    NearestPrioritizedAttackableTargetGoal(Mob &, std::vector<MobDescriptor> const&, float, int, bool, int, bool, bool, int, float, bool, int); // _ZN38NearestPrioritizedAttackableTargetGoalC2ER3MobRKSt6vectorI13MobDescriptorSaIS3_EEfibibbifbi
};
