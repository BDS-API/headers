#pragma once

#include "../Mob"


class AgentCommandExecutionGoal : Goal {

public:
    virtual AgentCommandExecutionGoal::~AgentCommandExecutionGoal()
    virtual bool canUse();
    virtual bool canBeInterrupted();
    virtual void start();
    virtual void stop();
    virtual void appendDebugInfo(std::string &)const;

    AgentCommandExecutionGoal(Mob &);
};
