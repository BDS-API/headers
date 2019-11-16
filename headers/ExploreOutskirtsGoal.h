#pragma once

class ExploreOutskirtsGoal : Goal {

    virtual void ExploreOutskirts~ExploreOutskirtsGoal();
    virtual void ExploreOutskirts~ExploreOutskirtsGoal();
    virtual void ExploreOutskirtscanUse(void);
    virtual void ExploreOutskirtscanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void ExploreOutskirtsstart(void);
    virtual void ExploreOutskirtsstop(void);
    virtual void ExploreOutskirtstick(void);
    virtual void ExploreOutskirtsappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
