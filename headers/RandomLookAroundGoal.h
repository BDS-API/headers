#pragma once

class RandomLookAroundGoal : Goal {

    virtual void RandomLookAround~RandomLookAroundGoal();
    virtual void RandomLookAround~RandomLookAroundGoal();
    virtual void RandomLookAroundcanUse(void);
    virtual void RandomLookAroundcanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void RandomLookAroundstart(void);
    virtual void stop(void);
    virtual void RandomLookAroundtick(void);
    virtual void RandomLookAroundappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
