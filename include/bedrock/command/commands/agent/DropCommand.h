#pragma once

using namespace AgentCommands;

class DropCommand : AgentCommands::Command {

public:
    virtual void AgentCommands::DropCommand::~DropCommand();
    virtual void execute(void);
    virtual bool isDone(void);

    DropCommand(Player &, int, int, AgentCommands::Direction);
};
