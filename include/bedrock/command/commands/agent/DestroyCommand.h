#pragma once

using namespace AgentCommands;

class DestroyCommand : AgentCommands::Command {

public:
    virtual void AgentCommands::DestroyCommand::~DestroyCommand();
    virtual void execute(void);
    virtual bool isDone(void);

    DestroyCommand(Player &, AgentCommands::Direction);
};
