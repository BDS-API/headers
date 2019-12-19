#pragma once

class EatCarriedItemGoal : Goal {

public:
    static long EATING_TIME;
    static long CHEW_CHANCE;

    virtual EatCarriedItemGoal::~EatCarriedItemGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;
    virtual void _updateInventory(ItemStack const&);
    virtual void _canEatItem(Item const*)const;
    virtual void _getContainerItem(void);

    EatCarriedItemGoal(Mob &, int);
};
