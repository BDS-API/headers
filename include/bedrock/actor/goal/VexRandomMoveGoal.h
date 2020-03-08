#pragma once

#include "../Mob"


class VexRandomMoveGoal : Goal {

public:
    virtual VexRandomMoveGoal::~VexRandomMoveGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    VexRandomMoveGoal(Mob &);
};
