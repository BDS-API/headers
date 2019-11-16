#pragma once

class ScaredGoal : Goal {

    virtual void Scared~ScaredGoal();
    virtual void Scared~ScaredGoal();
    virtual void ScaredcanUse(void);
    virtual void ScaredcanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void Scaredstart(void);
    virtual void Scaredstop(void);
    virtual void Scaredtick(void);
    virtual void ScaredappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
