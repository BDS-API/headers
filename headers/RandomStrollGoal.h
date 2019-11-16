#pragma once

class RandomStrollGoal : Goal {

    virtual void RandomStroll~RandomStrollGoal();
    virtual void RandomStroll~RandomStrollGoal();
    virtual void RandomStrollcanUse(void);
    virtual void RandomStrollcanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void RandomStrollstart(void);
    virtual void RandomStrollstop(void);
    virtual void RandomStrolltick(void);
    virtual void RandomStrollappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
    virtual void RandomStroll_setWantedPosition(void);
}
