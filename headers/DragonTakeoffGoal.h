#pragma once

class DragonTakeoffGoal : Goal {

    virtual void DragonTakeoff~DragonTakeoffGoal();
    virtual void DragonTakeoff~DragonTakeoffGoal();
    virtual void DragonTakeoffcanUse(void);
    virtual void DragonTakeoffcanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void DragonTakeoffstart(void);
    virtual void DragonTakeoffstop(void);
    virtual void DragonTakeofftick(void);
    virtual void DragonTakeoffappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
