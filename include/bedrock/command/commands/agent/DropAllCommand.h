#pragma once

#include "../../Command.h"


namespace AgentCommands {

    class DropAllCommand : AgentCommands::Command {

    public:
        virtual void execute();
        ~DropAllCommand();
        virtual bool isDone();
//      DropAllCommand(Player &, AgentCommands::Direction); //TODO: incomplete function definition
    };
}
