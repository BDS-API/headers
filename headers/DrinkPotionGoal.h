#pragma once

class DrinkPotionGoal : Goal {

    virtual void DrinkPotion~DrinkPotionGoal();
    virtual void DrinkPotion~DrinkPotionGoal();
    virtual void DrinkPotioncanUse(void);
    virtual void DrinkPotioncanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void DrinkPotionstart(void);
    virtual void DrinkPotionstop(void);
    virtual void DrinkPotiontick(void);
    virtual void DrinkPotionappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
