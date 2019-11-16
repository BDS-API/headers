#pragma once

class SummonActorGoal : Goal {

    virtual void SummonActor~SummonActorGoal();
    virtual void SummonActor~SummonActorGoal();
    virtual void SummonActorcanUse(void);
    virtual void SummonActorcanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void SummonActorstart(void);
    virtual void SummonActorstop(void);
    virtual void SummonActortick(void);
    virtual void SummonActorappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
