#pragma once

class CircleAroundAnchorGoal : Goal {

    virtual void CircleAroundAnchor~CircleAroundAnchorGoal();
    virtual void CircleAroundAnchor~CircleAroundAnchorGoal();
    virtual void CircleAroundAnchorcanUse(void);
    virtual void canContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void CircleAroundAnchorstart(void);
    virtual void CircleAroundAnchorstop(void);
    virtual void CircleAroundAnchortick(void);
    virtual void CircleAroundAnchorappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
