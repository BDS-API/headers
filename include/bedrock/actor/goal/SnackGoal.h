#pragma once

#include "../../item/ItemStack.h"
#include <string>
#include "../Mob.h"
#include <vector>
#include "Goal.h"
#include "../../item/unmapped/ItemDescriptor.h"


class SnackGoal : Goal {

public:
    static long PATH_RANGE;
    static long RANDOM_EATING_START;
    static long RANDOM_EATING_END;
    static long EATING_TIME;
    static long CHEW_CHANCE;
    static long SEARCH_SIZE;
    static long STOP_DIST_SQRD;

    virtual bool canUse();
    virtual void tick();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void appendDebugInfo(std::string &)const;
    virtual void stop();
    ~SnackGoal();
    void _hasSnackableItems();
    void _isSnackableItem(ItemStack const&)const;
    void _updateHand(ItemStack const&);
    SnackGoal(Mob &, std::vector<ItemDescriptor> const&, float, float, float);
};
