#pragma once

#include "../../../actor/Player.h"
#include "../../Command.h"


namespace AgentCommands {

    class DropCommand : AgentCommands::Command {

    public:
        virtual bool isDone();
        virtual void execute();
        ~DropCommand();
//      DropCommand(Player &, int, int, AgentCommands::Direction); //TODO: incomplete function definition
    };
}
