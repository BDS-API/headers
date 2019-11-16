#pragma once

class HoverGoal : Goal {

    virtual void Hover~HoverGoal();
    virtual void Hover~HoverGoal();
    virtual void HovercanUse(void);
    virtual void canContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void Hoverstart(void);
    virtual void Hoverstop(void);
    virtual void Hovertick(void);
    virtual void HoverappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
