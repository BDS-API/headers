#pragma once

#include "../../Command.h"


namespace AgentCommands {

    class DetectCommand : AgentCommands::Command {

    public:
        virtual bool isDone();
        ~DetectCommand();
        virtual void execute();
//      DetectCommand(Player &, AgentCommands::Direction); //TODO: incomplete function definition
    };
}
