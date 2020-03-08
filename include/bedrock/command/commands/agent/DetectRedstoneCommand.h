#pragma once

#include "../../../actor/Player"


using namespace AgentCommands;

class DetectRedstoneCommand : AgentCommands::Command {

public:
    virtual AgentCommands::DetectRedstoneCommand::~DetectRedstoneCommand()
    virtual void execute();
    virtual bool isDone();

    DetectRedstoneCommand(Player &, AgentCommands::Direction);
};
