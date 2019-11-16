#pragma once

class ReceiveLoveGoal : Goal {

    virtual void ReceiveLove~ReceiveLoveGoal();
    virtual void ReceiveLove~ReceiveLoveGoal();
    virtual void ReceiveLovecanUse(void);
    virtual void ReceiveLovecanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void ReceiveLovetick(void);
    virtual void ReceiveLoveappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
