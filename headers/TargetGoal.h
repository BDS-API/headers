#pragma once

class TargetGoal : Goal {

    virtual void Target~TargetGoal();
    virtual void Target~TargetGoal();
    virtual void TargetcanUse(void);
    virtual void TargetcanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void Targetstart(void);
    virtual void Targetstop(void);
    virtual void Targettick(void);
    virtual void TargetappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void TargetisTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
    virtual void Target_canAttack(Mob *, Actor *, bool, bool, MobDescriptor const**);
}
