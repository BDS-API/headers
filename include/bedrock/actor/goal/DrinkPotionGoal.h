#pragma once

#include <string>
#include "Goal.h"
#include <vector>


class DrinkPotionGoal : Goal {

public:
    static long THROTTLE_COOLDOWN;
    static long SPEED_MODIFIER_DRINKING_UUID;

    ~DrinkPotionGoal(); // _ZN15DrinkPotionGoalD2Ev
    virtual bool canUse(); // _ZN15DrinkPotionGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN15DrinkPotionGoal16canContinueToUseEv
    virtual void start(); // _ZN15DrinkPotionGoal5startEv
    virtual void stop(); // _ZN15DrinkPotionGoal4stopEv
    virtual void tick(); // _ZN15DrinkPotionGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK15DrinkPotionGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    DrinkPotionGoal(Mob &, float, std::vector<DrinkPotionData> const&); // _ZN15DrinkPotionGoalC2ER3MobfRKSt6vectorI15DrinkPotionDataSaIS3_EE
    void _findPotionToUse()const; // _ZNK15DrinkPotionGoal16_findPotionToUseEv
    void _setUsingItem(bool); // _ZN15DrinkPotionGoal13_setUsingItemEb
    void _updateEquipment(ItemStack const&); // _ZN15DrinkPotionGoal16_updateEquipmentERK9ItemStack
    void _isUsingItem()const; // _ZNK15DrinkPotionGoal12_isUsingItemEv
};
