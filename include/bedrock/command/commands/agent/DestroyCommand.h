#pragma once

#include "../../Command.h"


namespace AgentCommands {

    class DestroyCommand : AgentCommands::Command {

    public:
        ~DestroyCommand();
        virtual void execute();
        virtual bool isDone();
//      DestroyCommand(Player &, AgentCommands::Direction); //TODO: incomplete function definition
    };
}
