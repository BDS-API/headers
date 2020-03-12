#pragma once

#include "../IronGolem.h"
#include "Goal.h"
#include <string>


class OfferFlowerGoal : Goal {

public:
    virtual void appendDebugInfo(std::string &)const;
    virtual void start();
    virtual bool canUse();
    virtual void tick();
    virtual bool canContinueToUse();
    virtual void stop();
    ~OfferFlowerGoal();
    OfferFlowerGoal(IronGolem &);
};
