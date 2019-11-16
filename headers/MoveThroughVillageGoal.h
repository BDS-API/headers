#pragma once

class MoveThroughVillageGoal : Goal {

    virtual void MoveThroughVillage~MoveThroughVillageGoal();
    virtual void MoveThroughVillage~MoveThroughVillageGoal();
    virtual void MoveThroughVillagecanUse(void);
    virtual void MoveThroughVillagecanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void MoveThroughVillagestart(void);
    virtual void MoveThroughVillagestop(void);
    virtual void tick(void);
    virtual void MoveThroughVillageappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
