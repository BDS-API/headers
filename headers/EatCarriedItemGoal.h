#pragma once

class EatCarriedItemGoal : Goal {

public:
    static long EatCarriedItemGoal::EATING_TIME;
    static long EatCarriedItemGoal::CHEW_CHANCE;

    virtual ~EatCarriedItemGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void _updateInventory(ItemStack const&);
    virtual void _canEatItem(Item const*)const;
    virtual void _getContainerItem(void);

    void EatCarriedItemGoal(Mob &, int);
};
