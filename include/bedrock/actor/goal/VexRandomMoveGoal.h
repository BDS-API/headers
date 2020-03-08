#pragma once

#include "../Mob"


class VexRandomMoveGoal : Goal {

public:
    virtual VexRandomMoveGoal::~VexRandomMoveGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    VexRandomMoveGoal(Mob &);
};
