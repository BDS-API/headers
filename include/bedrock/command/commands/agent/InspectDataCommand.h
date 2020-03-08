#pragma once

#include "../../../actor/Player"


using namespace AgentCommands;

class InspectDataCommand : AgentCommands::Command {

public:
    virtual void AgentCommands::InspectDataCommand::~InspectDataCommand();
    virtual void execute(void);
    virtual bool isDone(void);
    virtual void fireCommandDoneEvent(void);

    InspectDataCommand(Player &, AgentCommands::Direction);
};
