#pragma once

#include <string>
#include "Goal.h"
#include <vector>


class SnackGoal : Goal {

public:
    static long PATH_RANGE;
    static long RANDOM_EATING_START;
    static long RANDOM_EATING_END;
    static long EATING_TIME;
    static long CHEW_CHANCE;
    static long SEARCH_SIZE;
    static long STOP_DIST_SQRD;

    ~SnackGoal(); // _ZN9SnackGoalD2Ev
    virtual bool canUse(); // _ZN9SnackGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN9SnackGoal16canContinueToUseEv
    virtual void start(); // _ZN9SnackGoal5startEv
    virtual void stop(); // _ZN9SnackGoal4stopEv
    virtual void tick(); // _ZN9SnackGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK9SnackGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    SnackGoal(Mob &, std::vector<ItemDescriptor> const&, float, float, float); // _ZN9SnackGoalC2ER3MobRKSt6vectorI14ItemDescriptorSaIS3_EEfff
    void _hasSnackableItems(); // _ZN9SnackGoal18_hasSnackableItemsEv
    void _updateHand(ItemStack const&); // _ZN9SnackGoal11_updateHandERK9ItemStack
    void _isSnackableItem(ItemStack const&)const; // _ZNK9SnackGoal16_isSnackableItemERK9ItemStack
};
