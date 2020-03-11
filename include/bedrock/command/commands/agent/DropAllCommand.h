#pragma once

#include "../../../actor/Player.h"
#include "../../Command.h"


namespace AgentCommands {

class DropAllCommand : AgentCommands::Command {

public:
    virtual ~DropAllCommand();
    virtual void execute();
    virtual bool isDone();

//  DropAllCommand(Player &, AgentCommands::Direction); //TODO: incomplete function definition
};

}