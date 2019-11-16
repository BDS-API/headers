#pragma once

class PlayerRideTamedGoal : Goal {

    virtual void PlayerRideTamed~PlayerRideTamedGoal();
    virtual void PlayerRideTamed~PlayerRideTamedGoal();
    virtual void PlayerRideTamedcanUse(void);
    virtual void PlayerRideTamedcanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void PlayerRideTamedstart(void);
    virtual void stop(void);
    virtual void PlayerRideTamedtick(void);
    virtual void PlayerRideTamedappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
