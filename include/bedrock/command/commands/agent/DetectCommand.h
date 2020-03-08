#pragma once

#include "../../../actor/Player"


using namespace AgentCommands;

class DetectCommand : AgentCommands::Command {

public:
    virtual AgentCommands::DetectCommand::~DetectCommand()
    virtual void execute();
    virtual bool isDone();

    DetectCommand(Player &, AgentCommands::Direction);
};
