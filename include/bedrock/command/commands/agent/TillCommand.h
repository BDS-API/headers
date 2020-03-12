#pragma once

#include <string>
#include "../../../actor/Player.h"
#include "../../Command.h"


namespace AgentCommands {

    class TillCommand : AgentCommands::Command {

    public:
        ~TillCommand();
        virtual void execute();
        virtual bool isDone();
//      TillCommand(Player &, std::string, AgentCommands::Direction); //TODO: incomplete function definition
    };
}
