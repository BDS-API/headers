#pragma once

class SneezeGoal : Goal {

    virtual void Sneeze~SneezeGoal();
    virtual void Sneeze~SneezeGoal();
    virtual void SneezecanUse(void);
    virtual void SneezecanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void Sneezestart(void);
    virtual void Sneezestop(void);
    virtual void Sneezetick(void);
    virtual void SneezeappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
