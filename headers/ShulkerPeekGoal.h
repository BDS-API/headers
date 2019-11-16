#pragma once

class ShulkerPeekGoal : Goal {

    virtual void ShulkerPeek~ShulkerPeekGoal();
    virtual void ShulkerPeek~ShulkerPeekGoal();
    virtual void ShulkerPeekcanUse(void);
    virtual void ShulkerPeekcanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void ShulkerPeekstart(void);
    virtual void ShulkerPeekstop(void);
    virtual void ShulkerPeektick(void);
    virtual void ShulkerPeekappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
