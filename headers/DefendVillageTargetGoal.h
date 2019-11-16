#pragma once

class DefendVillageTargetGoal : TargetGoal {

    virtual void DefendVillage~DefendVillageTargetGoal();
    virtual void DefendVillage~DefendVillageTargetGoal();
    virtual void DefendVillagecanUse(void);
    virtual void canContinueToUse(void);
    virtual void Goal::canBeInterrupted(void);
    virtual void DefendVillagestart(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void DefendVillageappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void Goal::onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
    virtual void _canAttack(Mob *, Actor *, bool, bool, MobDescriptor const**);
}
