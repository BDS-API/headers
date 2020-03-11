#pragma once

#include "../../../actor/Player.h"
#include "../../Command.h"


namespace AgentCommands {

class InspectCommand : AgentCommands::Command {

public:
    virtual ~InspectCommand();
    virtual void execute();
    virtual bool isDone();
    virtual void fireCommandDoneEvent();

//  InspectCommand(Player &, AgentCommands::Direction); //TODO: incomplete function definition
};

}