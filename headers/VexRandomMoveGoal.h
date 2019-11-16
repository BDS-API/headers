#pragma once

class VexRandomMoveGoal : Goal {

    virtual void VexRandomMove~VexRandomMoveGoal();
    virtual void VexRandomMove~VexRandomMoveGoal();
    virtual void VexRandomMovecanUse(void);
    virtual void VexRandomMovecanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void VexRandomMovetick(void);
    virtual void VexRandomMoveappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
