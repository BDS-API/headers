#pragma once

class SnackGoal : Goal {

public:
    static long PATH_RANGE;
    static long RANDOM_EATING_START;
    static long RANDOM_EATING_END;
    static long EATING_TIME;
    static long CHEW_CHANCE;
    static long SEARCH_SIZE;
    static long STOP_DIST_SQRD;

    virtual ~SnackGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    void SnackGoal(Mob &, std::vector<ItemDescriptor, std::allocator<ItemDescriptor>> const&, float, float, float);
    void _hasSnackableItems(void);
    void _updateHand(ItemStack const&);
    void _isSnackableItem(ItemStack const&)const;
};
