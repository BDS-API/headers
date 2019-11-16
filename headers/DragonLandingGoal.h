#pragma once

class DragonLandingGoal : Goal {

    virtual void DragonLanding~DragonLandingGoal();
    virtual void DragonLanding~DragonLandingGoal();
    virtual void DragonLandingcanUse(void);
    virtual void DragonLandingcanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void DragonLandingstart(void);
    virtual void DragonLandingstop(void);
    virtual void DragonLandingtick(void);
    virtual void DragonLandingappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
