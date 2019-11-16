#pragma once

class RestrictOpenDoorGoal : Goal {

    virtual void RestrictOpenDoor~RestrictOpenDoorGoal();
    virtual void RestrictOpenDoor~RestrictOpenDoorGoal();
    virtual void RestrictOpenDoorcanUse(void);
    virtual void RestrictOpenDoorcanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void RestrictOpenDoorstart(void);
    virtual void RestrictOpenDoorstop(void);
    virtual void tick(void);
    virtual void RestrictOpenDoorappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
