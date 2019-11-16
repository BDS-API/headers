#pragma once

class RandomSitGoal : Goal {

    virtual void RandomSit~RandomSitGoal();
    virtual void RandomSit~RandomSitGoal();
    virtual void RandomSitcanUse(void);
    virtual void RandomSitcanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void RandomSitstart(void);
    virtual void RandomSitstop(void);
    virtual void tick(void);
    virtual void RandomSitappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
