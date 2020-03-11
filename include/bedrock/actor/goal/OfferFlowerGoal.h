#pragma once

#include "../IronGolem.h"
#include "./Goal.h"
#include <string>


class OfferFlowerGoal : Goal {

public:
    virtual ~OfferFlowerGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    OfferFlowerGoal(IronGolem &);
};
