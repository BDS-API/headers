#pragma once

#include "../../../actor/Player.h"
#include "../../Command.h"


namespace AgentCommands {

    class TurnCommand : AgentCommands::Command {

    public:
        ~TurnCommand();
        virtual bool isDone();
        virtual void tick();
        virtual void execute();
//      TurnCommand(Player &, AgentCommands::Direction); //TODO: incomplete function definition
    };
}
