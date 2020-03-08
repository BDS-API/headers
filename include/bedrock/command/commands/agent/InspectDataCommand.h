#pragma once

#include "../../../actor/Player"


using namespace AgentCommands;

class InspectDataCommand : AgentCommands::Command {

public:
    virtual AgentCommands::InspectDataCommand::~InspectDataCommand()
    virtual void execute();
    virtual bool isDone();
    virtual void fireCommandDoneEvent();

    InspectDataCommand(Player &, AgentCommands::Direction);
};
