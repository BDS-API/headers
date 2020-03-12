#pragma once

#include <string>
#include "TargetGoal.h"
#include <vector>


class NearestAttackableTargetGoal : TargetGoal {

public:
    ~NearestAttackableTargetGoal();
    virtual bool canContinueToUse();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canUse();
    virtual void _findTarget(MobDescriptor const**);
    virtual void start();
    void _selectTarget();
    void _getNearbyActors();
    void _isTargetVisible(Mob const&, float, float)const;
    void _applyPlayerVisibilityModifier(Player const&, float &)const;
    void _canStartSearching();
    NearestAttackableTargetGoal(Mob &, std::vector<MobDescriptor> const&, float, int, bool, int, bool, bool, int, float, bool, int);
};
