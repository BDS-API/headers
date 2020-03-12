#pragma once

#include "../EnderMan.h"
#include "Goal.h"
#include <string>


class EndermanTakeBlockGoal : Goal {

public:
    ~EndermanTakeBlockGoal();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canUse();
    EndermanTakeBlockGoal(EnderMan &);
};
