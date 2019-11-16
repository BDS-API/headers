#pragma once

class DragonFlamingGoal : Goal {

    virtual void DragonFlaming~DragonFlamingGoal();
    virtual void DragonFlaming~DragonFlamingGoal();
    virtual void DragonFlamingcanUse(void);
    virtual void DragonFlamingcanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void DragonFlamingstart(void);
    virtual void DragonFlamingstop(void);
    virtual void DragonFlamingtick(void);
    virtual void DragonFlamingappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
