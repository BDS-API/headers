#pragma once

#include <string>
#include "../Player.h"
#include "../Mob.h"
#include <vector>
#include "TargetGoal.h"
#include "../../../unmapped/MobDescriptor.h"


class NearestAttackableTargetGoal : TargetGoal {

public:
    virtual void appendDebugInfo(std::string &)const;
    ~NearestAttackableTargetGoal();
    virtual void start();
    virtual void _findTarget(MobDescriptor const**);
    virtual bool canContinueToUse();
    virtual bool canUse();
    void _isTargetVisible(Mob const&, float, float)const;
    NearestAttackableTargetGoal(Mob &, std::vector<MobDescriptor> const&, float, int, bool, int, bool, bool, int, float, bool, int);
    void _getNearbyActors();
    void _canStartSearching();
    void _applyPlayerVisibilityModifier(Player const&, float &)const;
    void _selectTarget();
};
