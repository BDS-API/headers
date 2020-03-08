#pragma once

#include "../EnderMan"


class EndermanTakeBlockGoal : Goal {

public:
    EndermanTakeBlockGoal::~EndermanTakeBlockGoal()
    virtual bool canUse();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    EndermanTakeBlockGoal(EnderMan &);
};
