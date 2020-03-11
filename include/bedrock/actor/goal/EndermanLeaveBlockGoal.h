#pragma once

#include "./Goal.h"
#include "../EnderMan.h"
#include <string>


class EndermanLeaveBlockGoal : Goal {

public:
    virtual ~EndermanLeaveBlockGoal();
    virtual bool canUse();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    EndermanLeaveBlockGoal(EnderMan &);
};
