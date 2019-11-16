#pragma once

class EatCarriedItemGoal : Goal {

    virtual void EatCarriedItem~EatCarriedItemGoal();
    virtual void EatCarriedItem~EatCarriedItemGoal();
    virtual void EatCarriedItemcanUse(void);
    virtual void EatCarriedItemcanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void EatCarriedItemstart(void);
    virtual void EatCarriedItemstop(void);
    virtual void EatCarriedItemtick(void);
    virtual void EatCarriedItemappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
    virtual void EatCarriedItem_updateInventory(ItemStack const&);
    virtual void EatCarriedItem_canEatItem(Item const*)const;
    virtual void EatCarriedItem_getContainerItem(void);
}
