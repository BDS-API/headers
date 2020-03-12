#pragma once

#include "../../../actor/Player.h"
#include "../../Command.h"


namespace AgentCommands {

    class DetectRedstoneCommand : AgentCommands::Command {

    public:
        ~DetectRedstoneCommand();
        virtual bool isDone();
        virtual void execute();
//      DetectRedstoneCommand(Player &, AgentCommands::Direction); //TODO: incomplete function definition
    };
}
