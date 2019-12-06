#pragma once

class AgentCommands::DetectRedstoneCommand : AgentCommands::Command {

public:
    virtual ~DetectRedstoneCommand();
    virtual void execute(void);
    virtual bool isDone(void);

    void DetectRedstoneCommand(Player &, AgentCommands::Direction);
};
