#pragma once

#include "../../../actor/Player.h"
#include "../../../item/ItemStack.h"
#include "../../Command.h"


namespace AgentCommands {

class PlaceCommand : AgentCommands::Command {

public:
    virtual ~PlaceCommand();
    virtual void execute();
    virtual bool isDone();

//  PlaceCommand(Player &, ItemStack const&, int, AgentCommands::Direction); //TODO: incomplete function definition
};

}