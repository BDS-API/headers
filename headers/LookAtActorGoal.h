#pragma once

class LookAtActorGoal : Goal {

    virtual void LookAtActor~LookAtActorGoal();
    virtual void LookAtActor~LookAtActorGoal();
    virtual void LookAtActorcanUse(void);
    virtual void LookAtActorcanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void LookAtActorstart(void);
    virtual void LookAtActorstop(void);
    virtual void LookAtActortick(void);
    virtual void LookAtActorappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
