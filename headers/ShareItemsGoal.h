#pragma once

class ShareItemsGoal : Goal {

    virtual void ShareItems~ShareItemsGoal();
    virtual void ShareItems~ShareItemsGoal();
    virtual void ShareItemscanUse(void);
    virtual void ShareItemscanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void ShareItemsstart(void);
    virtual void ShareItemsstop(void);
    virtual void ShareItemstick(void);
    virtual void ShareItemsappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
