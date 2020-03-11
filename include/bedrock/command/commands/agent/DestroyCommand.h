#pragma once

#include "../../../actor/Player.h"
#include "../../Command.h"


namespace AgentCommands {

class DestroyCommand : AgentCommands::Command {

public:
    virtual ~DestroyCommand();
    virtual void execute();
    virtual bool isDone();

//  DestroyCommand(Player &, AgentCommands::Direction); //TODO: incomplete function definition
};

}