#pragma once

#include "../../../actor/Player.h"
#include "../../Command.h"


namespace AgentCommands {

class InspectDataCommand : AgentCommands::Command {

public:
    virtual ~InspectDataCommand();
    virtual void execute();
    virtual bool isDone();
    virtual void fireCommandDoneEvent();

//  InspectDataCommand(Player &, AgentCommands::Direction); //TODO: incomplete function definition
};

}