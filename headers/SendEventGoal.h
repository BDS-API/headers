#pragma once

class SendEventGoal : Goal {

    virtual void SendEvent~SendEventGoal();
    virtual void SendEvent~SendEventGoal();
    virtual void SendEventcanUse(void);
    virtual void SendEventcanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void SendEventstart(void);
    virtual void SendEventstop(void);
    virtual void SendEventtick(void);
    virtual void SendEventappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
