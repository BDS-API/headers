#pragma once

class OfferFlowerGoal : Goal {

public:
    virtual OfferFlowerGoal::~OfferFlowerGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    OfferFlowerGoal(IronGolem &);
};
