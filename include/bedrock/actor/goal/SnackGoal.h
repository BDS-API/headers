#pragma once

#include "../Mob"
#include "../../item/unmapped/ItemDescriptor"
#include "../../item/ItemStack"


class SnackGoal : Goal {

public:
    static long PATH_RANGE;
    static long RANDOM_EATING_START;
    static long RANDOM_EATING_END;
    static long EATING_TIME;
    static long CHEW_CHANCE;
    static long SEARCH_SIZE;
    static long STOP_DIST_SQRD;

    virtual SnackGoal::~SnackGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    SnackGoal(Mob &, std::vector<ItemDescriptor, std::allocator<ItemDescriptor>> const&, float, float, float);
    void _hasSnackableItems();
    void _updateHand(ItemStack const&);
    void _isSnackableItem(ItemStack const&)const;
};
