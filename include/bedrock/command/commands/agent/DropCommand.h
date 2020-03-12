#pragma once

#include "../../Command.h"


namespace AgentCommands {

    class DropCommand : AgentCommands::Command {

    public:
        virtual void execute();
        virtual bool isDone();
        ~DropCommand();
//      DropCommand(Player &, int, int, AgentCommands::Direction); //TODO: incomplete function definition
    };
}
