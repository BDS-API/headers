#pragma once

#include <string>
#include "Goal.h"


class EndermanLeaveBlockGoal : Goal {

public:
    virtual bool canUse();
    virtual void tick();
    ~EndermanLeaveBlockGoal();
    virtual void appendDebugInfo(std::string &)const;
    EndermanLeaveBlockGoal(EnderMan &);
};
