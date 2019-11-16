#pragma once

class LayDownGoal : Goal {

    virtual void LayDown~LayDownGoal();
    virtual void LayDown~LayDownGoal();
    virtual void LayDowncanUse(void);
    virtual void LayDowncanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void LayDownstart(void);
    virtual void LayDownstop(void);
    virtual void LayDowntick(void);
    virtual void LayDownappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
