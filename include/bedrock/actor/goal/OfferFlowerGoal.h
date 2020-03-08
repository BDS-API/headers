#pragma once

#include "../IronGolem"


class OfferFlowerGoal : Goal {

public:
    virtual OfferFlowerGoal::~OfferFlowerGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    OfferFlowerGoal(IronGolem &);
};
