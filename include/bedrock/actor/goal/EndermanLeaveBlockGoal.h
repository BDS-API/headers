#pragma once

#include "../EnderMan.h"
#include "Goal.h"
#include <string>


class EndermanLeaveBlockGoal : Goal {

public:
    virtual void appendDebugInfo(std::string &)const;
    ~EndermanLeaveBlockGoal();
    virtual bool canUse();
    virtual void tick();
    EndermanLeaveBlockGoal(EnderMan &);
};
