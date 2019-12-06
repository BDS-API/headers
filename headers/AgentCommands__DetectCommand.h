#pragma once

class AgentCommands::DetectCommand : AgentCommands::Command {

public:
    virtual ~DetectCommand();
    virtual void execute(void);
    virtual bool isDone(void);

    void DetectCommand(Player &, AgentCommands::Direction);
};
