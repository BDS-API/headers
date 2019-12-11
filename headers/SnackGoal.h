#pragma once

class SnackGoal : Goal {

public:
    static long SnackGoal::PATH_RANGE;
    static long SnackGoal::RANDOM_EATING_START;
    static long SnackGoal::RANDOM_EATING_END;
    static long SnackGoal::EATING_TIME;
    static long SnackGoal::CHEW_CHANCE;
    static long SnackGoal::SEARCH_SIZE;
    static long SnackGoal::STOP_DIST_SQRD;

    virtual ~SnackGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;

    void SnackGoal(Mob &, std::vector<ItemDescriptor, std::allocator<ItemDescriptor>> const&, float, float, float);
    void _hasSnackableItems(void);
    void _updateHand(ItemStack const&);
    void _isSnackableItem(ItemStack const&)const;
};
