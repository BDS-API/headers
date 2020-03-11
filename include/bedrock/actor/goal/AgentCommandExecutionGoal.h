#pragma once

#include "./Goal.h"
#include "../Mob.h"
#include <string>


class AgentCommandExecutionGoal : Goal {

public:
    virtual ~AgentCommandExecutionGoal();
    virtual bool canUse();
    virtual bool canBeInterrupted();
    virtual void start();
    virtual void stop();
    virtual void appendDebugInfo(std::string &)const;

    AgentCommandExecutionGoal(Mob &);
};
