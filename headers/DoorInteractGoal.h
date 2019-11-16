#pragma once

class DoorInteractGoal : Goal {

    virtual void DoorInteract~DoorInteractGoal();
    virtual void DoorInteract~DoorInteractGoal();
    virtual void DoorInteractcanUse(void);
    virtual void DoorInteractcanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void DoorInteractstart(void);
    virtual void stop(void);
    virtual void DoorInteracttick(void);
    virtual void DoorInteractappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
