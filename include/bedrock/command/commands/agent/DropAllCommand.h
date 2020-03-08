#pragma once

#include "../../../actor/Player"


using namespace AgentCommands;

class DropAllCommand : AgentCommands::Command {

public:
    AgentCommands::DropAllCommand::~DropAllCommand()
    virtual void execute();
    virtual bool isDone();

    DropAllCommand(Player &, AgentCommands::Direction);
};
