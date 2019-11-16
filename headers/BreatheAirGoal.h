#pragma once

class BreatheAirGoal : Goal {

    virtual void BreatheAir~BreatheAirGoal();
    virtual void BreatheAir~BreatheAirGoal();
    virtual void BreatheAircanUse(void);
    virtual void BreatheAircanContinueToUse(void);
    virtual void BreatheAircanBeInterrupted(void);
    virtual void BreatheAirstart(void);
    virtual void stop(void);
    virtual void BreatheAirtick(void);
    virtual void BreatheAirappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
