#pragma once

#include "Goal.h"
#include "../Mob.h"
#include <string>


class AgentCommandExecutionGoal : Goal {

public:
    virtual bool canUse();
    virtual void stop();
    ~AgentCommandExecutionGoal();
    virtual bool canBeInterrupted();
    virtual void appendDebugInfo(std::string &)const;
    virtual void start();
    AgentCommandExecutionGoal(Mob &);
};
