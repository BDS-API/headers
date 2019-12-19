#pragma once

class EndermanTakeBlockGoal : Goal {

public:
    virtual EndermanTakeBlockGoal::~EndermanTakeBlockGoal();
    virtual bool canUse(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    EndermanTakeBlockGoal(EnderMan &);
};
