#pragma once

class BreedGoal : Goal {

    virtual void Breed~BreedGoal();
    virtual void Breed~BreedGoal();
    virtual void BreedcanUse(void);
    virtual void BreedcanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void start(void);
    virtual void Breedstop(void);
    virtual void Breedtick(void);
    virtual void BreedappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
