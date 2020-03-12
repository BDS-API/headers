#pragma once

#include "../../Command.h"


namespace AgentCommands {

    class TurnCommand : AgentCommands::Command {

    public:
        virtual void tick();
        virtual void execute();
        virtual bool isDone();
        ~TurnCommand();
//      TurnCommand(Player &, AgentCommands::Direction); //TODO: incomplete function definition
    };
}
