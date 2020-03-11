#pragma once

#include "../WitherBoss.h"
#include "./Goal.h"
#include <string>


class WitherDoNothingGoal : Goal {

public:
    virtual ~WitherDoNothingGoal();
    virtual bool canUse();
    virtual void appendDebugInfo(std::string &)const;

    WitherDoNothingGoal(WitherBoss &);
};
