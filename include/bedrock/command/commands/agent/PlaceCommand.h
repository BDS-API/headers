#pragma once

#include "../../../item/ItemStack.h"
#include "../../../actor/Player.h"
#include "../../Command.h"


namespace AgentCommands {

    class PlaceCommand : AgentCommands::Command {

    public:
        ~PlaceCommand();
        virtual bool isDone();
        virtual void execute();
//      PlaceCommand(Player &, ItemStack const&, int, AgentCommands::Direction); //TODO: incomplete function definition
    };
}
