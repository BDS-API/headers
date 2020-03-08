#pragma once

#include "../../../actor/Player"


using namespace AgentCommands;

class DropCommand : AgentCommands::Command {

public:
    AgentCommands::DropCommand::~DropCommand()
    virtual void execute();
    virtual bool isDone();

    DropCommand(Player &, int, int, AgentCommands::Direction);
};
