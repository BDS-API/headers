#pragma once

class SlimeRandomDirectionGoal : Goal {

    virtual void SlimeRandomDirection~SlimeRandomDirectionGoal();
    virtual void SlimeRandomDirection~SlimeRandomDirectionGoal();
    virtual void SlimeRandomDirectioncanUse(void);
    virtual void canContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void SlimeRandomDirectiontick(void);
    virtual void SlimeRandomDirectionappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
