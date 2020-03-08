#pragma once

#include "../Mob"


class TakeFlowerGoal : Goal {

public:
    virtual TakeFlowerGoal::~TakeFlowerGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    TakeFlowerGoal(Mob &);
};
