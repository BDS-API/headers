#pragma once

class TakeFlowerGoal : Goal {

    virtual void TakeFlower~TakeFlowerGoal();
    virtual void TakeFlower~TakeFlowerGoal();
    virtual void TakeFlowercanUse(void);
    virtual void TakeFlowercanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void TakeFlowerstart(void);
    virtual void TakeFlowerstop(void);
    virtual void TakeFlowertick(void);
    virtual void TakeFlowerappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
