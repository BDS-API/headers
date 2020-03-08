#pragma once

#include "../Mob"


class ShulkerPeekGoal : Goal {

public:
    ShulkerPeekGoal::~ShulkerPeekGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    ShulkerPeekGoal(Mob &);
};
