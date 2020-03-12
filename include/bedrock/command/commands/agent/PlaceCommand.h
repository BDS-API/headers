#pragma once

#include "../../Command.h"


namespace AgentCommands {

    class PlaceCommand : AgentCommands::Command {

    public:
        virtual void execute();
        ~PlaceCommand();
        virtual bool isDone();
//      PlaceCommand(Player &, ItemStack const&, int, AgentCommands::Direction); //TODO: incomplete function definition
    };
}
