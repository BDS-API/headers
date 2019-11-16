#pragma once

class AvoidMobGoal : Goal {

    virtual void AvoidMob~AvoidMobGoal();
    virtual void AvoidMob~AvoidMobGoal();
    virtual void AvoidMobcanUse(void);
    virtual void AvoidMobcanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void AvoidMobstart(void);
    virtual void AvoidMobstop(void);
    virtual void AvoidMobtick(void);
    virtual void AvoidMobappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
    virtual void AvoidMobfindNearestEntityToAvoid(float);
}
