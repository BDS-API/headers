#pragma once

class SquidFleeGoal : Goal {

    virtual void SquidFlee~SquidFleeGoal();
    virtual void SquidFlee~SquidFleeGoal();
    virtual void SquidFleecanUse(void);
    virtual void SquidFleecanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void SquidFleestart(void);
    virtual void SquidFleestop(void);
    virtual void SquidFleetick(void);
    virtual void SquidFleeappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
