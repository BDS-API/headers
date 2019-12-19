#pragma once

class EndermanLeaveBlockGoal : Goal {

public:
    virtual EndermanLeaveBlockGoal::~EndermanLeaveBlockGoal();
    virtual bool canUse(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    EndermanLeaveBlockGoal(EnderMan &);
};
