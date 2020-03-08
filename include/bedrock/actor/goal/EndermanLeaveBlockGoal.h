#pragma once

#include "../EnderMan"


class EndermanLeaveBlockGoal : Goal {

public:
    virtual EndermanLeaveBlockGoal::~EndermanLeaveBlockGoal()
    virtual bool canUse();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    EndermanLeaveBlockGoal(EnderMan &);
};
