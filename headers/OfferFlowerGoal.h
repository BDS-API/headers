#pragma once

class OfferFlowerGoal : Goal {

    virtual void OfferFlower~OfferFlowerGoal();
    virtual void OfferFlower~OfferFlowerGoal();
    virtual void OfferFlowercanUse(void);
    virtual void OfferFlowercanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void OfferFlowerstart(void);
    virtual void OfferFlowerstop(void);
    virtual void OfferFlowertick(void);
    virtual void OfferFlowerappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
