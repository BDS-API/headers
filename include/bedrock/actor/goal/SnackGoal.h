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

    virtual bool canContinueToUse();
    virtual bool canUse();
    virtual void appendDebugInfo(std::string &)const;
    virtual void start();
    ~SnackGoal();
    virtual void tick();
    virtual void stop();
    void _updateHand(ItemStack const&);
    void _isSnackableItem(ItemStack const&)const;
    void _hasSnackableItems();
    SnackGoal(Mob &, std::vector<ItemDescriptor> const&, float, float, float);
};
