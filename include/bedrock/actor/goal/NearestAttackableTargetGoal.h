#pragma once

#include <string>
#include "TargetGoal.h"
#include <vector>


class NearestAttackableTargetGoal : TargetGoal {

public:
    ~NearestAttackableTargetGoal(); // _ZN27NearestAttackableTargetGoalD2Ev
    virtual bool canUse(); // _ZN27NearestAttackableTargetGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN27NearestAttackableTargetGoal16canContinueToUseEv
    virtual void start(); // _ZN27NearestAttackableTargetGoal5startEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK27NearestAttackableTargetGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void _findTarget(MobDescriptor const**); // _ZN27NearestAttackableTargetGoal11_findTargetEPPK13MobDescriptor
    NearestAttackableTargetGoal(Mob &, std::vector<MobDescriptor> const&, float, int, bool, int, bool, bool, int, float, bool, int); // _ZN27NearestAttackableTargetGoalC2ER3MobRKSt6vectorI13MobDescriptorSaIS3_EEfibibbifbi
    void _canStartSearching(); // _ZN27NearestAttackableTargetGoal18_canStartSearchingEv
    void _selectTarget(); // _ZN27NearestAttackableTargetGoal13_selectTargetEv
    void _isTargetVisible(Mob const&, float, float)const; // _ZNK27NearestAttackableTargetGoal16_isTargetVisibleERK3Mobff
    void _getNearbyActors(); // _ZN27NearestAttackableTargetGoal16_getNearbyActorsEv
    void _applyPlayerVisibilityModifier(Player const&, float &)const; // _ZNK27NearestAttackableTargetGoal30_applyPlayerVisibilityModifierERK6PlayerRf
};
