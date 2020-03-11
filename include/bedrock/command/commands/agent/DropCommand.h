#pragma once

#include "../../../actor/Player.h"
#include "../../Command.h"


namespace AgentCommands {

class DropCommand : AgentCommands::Command {

public:
    virtual ~DropCommand();
    virtual void execute();
    virtual bool isDone();

//  DropCommand(Player &, int, int, AgentCommands::Direction); //TODO: incomplete function definition
};

}