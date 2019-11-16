#pragma once

class PickupItemsGoal : Goal {

    virtual void PickupItems~PickupItemsGoal();
    virtual void PickupItems~PickupItemsGoal();
    virtual void PickupItemscanUse(void);
    virtual void PickupItemscanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void PickupItemsstart(void);
    virtual void PickupItemsstop(void);
    virtual void PickupItemstick(void);
    virtual void PickupItemsappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
