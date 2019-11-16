#pragma once

class DragonChargePlayerGoal : Goal {

    virtual void DragonChargePlayer~DragonChargePlayerGoal();
    virtual void DragonChargePlayer~DragonChargePlayerGoal();
    virtual void DragonChargePlayercanUse(void);
    virtual void DragonChargePlayercanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void DragonChargePlayerstart(void);
    virtual void DragonChargePlayerstop(void);
    virtual void DragonChargePlayertick(void);
    virtual void DragonChargePlayerappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
