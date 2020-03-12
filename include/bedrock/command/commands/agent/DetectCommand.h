#pragma once

#include "../../../actor/Player.h"
#include "../../Command.h"


namespace AgentCommands {

    class DetectCommand : AgentCommands::Command {

    public:
        ~DetectCommand();
        virtual bool isDone();
        virtual void execute();
//      DetectCommand(Player &, AgentCommands::Direction); //TODO: incomplete function definition
    };
}
