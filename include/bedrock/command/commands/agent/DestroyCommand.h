#pragma once

#include "../../../actor/Player"


using namespace AgentCommands;

class DestroyCommand : AgentCommands::Command {

public:
    virtual AgentCommands::DestroyCommand::~DestroyCommand()
    virtual void execute();
    virtual bool isDone();

    DestroyCommand(Player &, AgentCommands::Direction);
};
