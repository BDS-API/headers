#pragma once

#include "./Goal.h"
#include "../EnderMan.h"
#include <string>


class EndermanTakeBlockGoal : Goal {

public:
    virtual ~EndermanTakeBlockGoal();
    virtual bool canUse();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    EndermanTakeBlockGoal(EnderMan &);
};
