#pragma once

class NapGoal : Goal {

    virtual void Nap~NapGoal();
    virtual void Nap~NapGoal();
    virtual void NapcanUse(void);
    virtual void NapcanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void Napstart(void);
    virtual void Napstop(void);
    virtual void tick(void);
    virtual void NapappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
