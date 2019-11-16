#pragma once

class StalkAndPounceOnTargetGoal : Goal {

    virtual void StalkAndPounceOnTarget~StalkAndPounceOnTargetGoal();
    virtual void StalkAndPounceOnTarget~StalkAndPounceOnTargetGoal();
    virtual void StalkAndPounceOnTargetcanUse(void);
    virtual void StalkAndPounceOnTargetcanContinueToUse(void);
    virtual void StalkAndPounceOnTargetcanBeInterrupted(void);
    virtual void StalkAndPounceOnTargetstart(void);
    virtual void StalkAndPounceOnTargetstop(void);
    virtual void StalkAndPounceOnTargettick(void);
    virtual void StalkAndPounceOnTargetappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
