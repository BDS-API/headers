#pragma once

using namespace AgentCommands;

class DropAllCommand : AgentCommands::Command {

public:
    virtual void AgentCommands::DropAllCommand::~DropAllCommand();
    virtual void execute(void);
    virtual bool isDone(void);

    DropAllCommand(Player &, AgentCommands::Direction);
};
