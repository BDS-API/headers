#pragma once

class AgentCommandExecutionGoal : Goal {

public:
    virtual ~AgentCommandExecutionGoal();
    virtual bool canUse(void);
    virtual bool canBeInterrupted(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void appendDebugInfo(std::string &)const;

    void AgentCommandExecutionGoal(Mob &);
};
