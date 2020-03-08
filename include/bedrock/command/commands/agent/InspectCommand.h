#pragma once

#include "../../../actor/Player"


using namespace AgentCommands;

class InspectCommand : AgentCommands::Command {

public:
    AgentCommands::InspectCommand::~InspectCommand()
    virtual void execute();
    virtual bool isDone();
    virtual void fireCommandDoneEvent();

    InspectCommand(Player &, AgentCommands::Direction);
};
