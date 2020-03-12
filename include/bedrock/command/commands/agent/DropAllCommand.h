#pragma once

#include "../../../actor/Player.h"
#include "../../Command.h"


namespace AgentCommands {

    class DropAllCommand : AgentCommands::Command {

    public:
        virtual void execute();
        virtual bool isDone();
        ~DropAllCommand();
//      DropAllCommand(Player &, AgentCommands::Direction); //TODO: incomplete function definition
    };
}
