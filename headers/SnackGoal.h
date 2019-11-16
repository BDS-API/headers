#pragma once

class SnackGoal : Goal {

    virtual void Snack~SnackGoal();
    virtual void Snack~SnackGoal();
    virtual void SnackcanUse(void);
    virtual void SnackcanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void Snackstart(void);
    virtual void Snackstop(void);
    virtual void Snacktick(void);
    virtual void SnackappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
