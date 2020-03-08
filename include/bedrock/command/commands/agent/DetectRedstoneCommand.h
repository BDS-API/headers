#pragma once

#include "../../../actor/Player"


using namespace AgentCommands;

class DetectRedstoneCommand : AgentCommands::Command {

public:
    AgentCommands::DetectRedstoneCommand::~DetectRedstoneCommand()
    virtual void execute();
    virtual bool isDone();

    DetectRedstoneCommand(Player &, AgentCommands::Direction);
};
