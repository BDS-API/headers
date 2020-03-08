#pragma once

#include "../Mob"


class AgentCommandExecutionGoal : Goal {

public:
    virtual AgentCommandExecutionGoal::~AgentCommandExecutionGoal();
    virtual bool canUse(void);
    virtual bool canBeInterrupted(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void appendDebugInfo(std::string &)const;

    AgentCommandExecutionGoal(Mob &);
};
