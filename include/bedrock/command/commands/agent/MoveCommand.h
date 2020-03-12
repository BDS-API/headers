#pragma once

#include "../../../actor/Player.h"
#include "../../Command.h"


namespace AgentCommands {

    class MoveCommand : AgentCommands::Command {

    public:
        virtual void execute();
        virtual void tick();
        virtual bool isDone();
        ~MoveCommand();
        void _reachedPosition();
//      MoveCommand(Player &, AgentCommands::Direction); //TODO: incomplete function definition
    };
}
