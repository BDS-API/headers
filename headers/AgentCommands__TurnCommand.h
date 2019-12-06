#pragma once

class AgentCommands::TurnCommand : AgentCommands::Command {

public:
    virtual ~TurnCommand();
    virtual void execute(void);
    virtual bool isDone(void);
    virtual void tick(void);

    void TurnCommand(Player &, AgentCommands::Direction);
};
