#pragma once

class MakeLoveGoal : Goal {

    virtual void MakeLove~MakeLoveGoal();
    virtual void MakeLove~MakeLoveGoal();
    virtual void MakeLovecanUse(void);
    virtual void MakeLovecanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void MakeLovestart(void);
    virtual void MakeLovestop(void);
    virtual void MakeLovetick(void);
    virtual void MakeLoveappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
