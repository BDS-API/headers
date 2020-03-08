#pragma once

#include "../../../actor/Player"


using namespace AgentCommands;

class DetectCommand : AgentCommands::Command {

public:
    AgentCommands::DetectCommand::~DetectCommand()
    virtual void execute();
    virtual bool isDone();

    DetectCommand(Player &, AgentCommands::Direction);
};
