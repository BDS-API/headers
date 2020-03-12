#pragma once

#include "../WitherBoss.h"
#include "Goal.h"
#include <string>


class WitherDoNothingGoal : Goal {

public:
    virtual bool canUse();
    ~WitherDoNothingGoal();
    virtual void appendDebugInfo(std::string &)const;
    WitherDoNothingGoal(WitherBoss &);
};
