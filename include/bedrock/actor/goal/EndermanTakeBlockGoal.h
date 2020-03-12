#pragma once

#include <string>
#include "Goal.h"


class EndermanTakeBlockGoal : Goal {

public:
    ~EndermanTakeBlockGoal();
    virtual bool canUse();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;
    EndermanTakeBlockGoal(EnderMan &);
};
