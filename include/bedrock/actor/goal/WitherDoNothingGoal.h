#pragma once

#include "../WitherBoss"


class WitherDoNothingGoal : Goal {

public:
    virtual WitherDoNothingGoal::~WitherDoNothingGoal()
    virtual bool canUse();
    virtual void appendDebugInfo(std::string &)const;

    WitherDoNothingGoal(WitherBoss &);
};
