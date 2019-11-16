#pragma once

class DragonDeathGoal : Goal {

    virtual void DragonDeath~DragonDeathGoal();
    virtual void DragonDeath~DragonDeathGoal();
    virtual void DragonDeathcanUse(void);
    virtual void DragonDeathcanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void DragonDeathstart(void);
    virtual void DragonDeathstop(void);
    virtual void DragonDeathtick(void);
    virtual void DragonDeathappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
