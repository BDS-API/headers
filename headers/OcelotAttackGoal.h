#pragma once

class OcelotAttackGoal : Goal {

    virtual void OcelotAttack~OcelotAttackGoal();
    virtual void OcelotAttack~OcelotAttackGoal();
    virtual void OcelotAttackcanUse(void);
    virtual void OcelotAttackcanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void start(void);
    virtual void OcelotAttackstop(void);
    virtual void OcelotAttacktick(void);
    virtual void OcelotAttackappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
