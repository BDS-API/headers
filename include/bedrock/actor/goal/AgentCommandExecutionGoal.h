#pragma once

#include <string>
#include "Goal.h"


class AgentCommandExecutionGoal : Goal {

public:
    virtual bool canUse();
    ~AgentCommandExecutionGoal();
    virtual void stop();
    virtual void start();
    virtual bool canBeInterrupted();
    virtual void appendDebugInfo(std::string &)const;
    AgentCommandExecutionGoal(Mob &);
};
