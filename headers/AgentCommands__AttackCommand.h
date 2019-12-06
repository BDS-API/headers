#pragma once

class AgentCommands::AttackCommand : AgentCommands::Command {

public:
    virtual ~AttackCommand();
    virtual void execute(void);
    virtual bool isDone(void);

    void AttackCommand(Player &, AgentCommands::Direction);
};
