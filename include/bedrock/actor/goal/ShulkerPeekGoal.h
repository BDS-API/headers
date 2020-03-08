#pragma once

#include "../Mob"


class ShulkerPeekGoal : Goal {

public:
    virtual ShulkerPeekGoal::~ShulkerPeekGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    ShulkerPeekGoal(Mob &);
};
