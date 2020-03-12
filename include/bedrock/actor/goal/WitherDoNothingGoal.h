#pragma once

#include <string>
#include "Goal.h"


class WitherDoNothingGoal : Goal {

public:
    ~WitherDoNothingGoal();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canUse();
    WitherDoNothingGoal(WitherBoss &);
};
