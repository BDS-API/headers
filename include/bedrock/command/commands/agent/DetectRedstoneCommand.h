#pragma once

#include "../../Command.h"


namespace AgentCommands {

    class DetectRedstoneCommand : AgentCommands::Command {

    public:
        virtual void execute();
        virtual bool isDone();
        ~DetectRedstoneCommand();
//      DetectRedstoneCommand(Player &, AgentCommands::Direction); //TODO: incomplete function definition
    };
}
