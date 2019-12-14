#pragma once

class EndermanLeaveBlockGoal : Goal {

public:
    virtual ~EndermanLeaveBlockGoal();
    virtual bool canUse(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    void EndermanLeaveBlockGoal(EnderMan &);
};
