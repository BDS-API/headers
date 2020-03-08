#pragma once

#include "../../../actor/Player"


using namespace AgentCommands;

class DropAllCommand : AgentCommands::Command {

public:
    virtual AgentCommands::DropAllCommand::~DropAllCommand()
    virtual void execute();
    virtual bool isDone();

    DropAllCommand(Player &, AgentCommands::Direction);
};
