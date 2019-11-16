#pragma once

class SwimWanderGoal : Goal {

    virtual void SwimWander~SwimWanderGoal();
    virtual void SwimWander~SwimWanderGoal();
    virtual void SwimWandercanUse(void);
    virtual void SwimWandercanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void SwimWanderstart(void);
    virtual void stop(void);
    virtual void SwimWandertick(void);
    virtual void SwimWanderappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
