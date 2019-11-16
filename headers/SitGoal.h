#pragma once

class SitGoal : Goal {

    virtual void Sit~SitGoal();
    virtual void Sit~SitGoal();
    virtual void SitcanUse(void);
    virtual void canContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void Sitstart(void);
    virtual void Sitstop(void);
    virtual void tick(void);
    virtual void SitappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
