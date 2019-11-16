#pragma once

class DragonStrafePlayerGoal : Goal {

    virtual void DragonStrafePlayer~DragonStrafePlayerGoal();
    virtual void DragonStrafePlayer~DragonStrafePlayerGoal();
    virtual void DragonStrafePlayercanUse(void);
    virtual void DragonStrafePlayercanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void DragonStrafePlayerstart(void);
    virtual void DragonStrafePlayerstop(void);
    virtual void DragonStrafePlayertick(void);
    virtual void DragonStrafePlayerappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
