#pragma once

#include <string>
#include "Goal.h"


class OfferFlowerGoal : Goal {

public:
    virtual void start();
    ~OfferFlowerGoal();
    virtual void stop();
    virtual void tick();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void appendDebugInfo(std::string &)const;
    OfferFlowerGoal(IronGolem &);
};
