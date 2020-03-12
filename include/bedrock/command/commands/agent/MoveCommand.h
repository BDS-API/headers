#pragma once

#include "../../Command.h"


namespace AgentCommands {

    class MoveCommand : AgentCommands::Command {

    public:
        virtual void execute();
        virtual bool isDone();
        virtual void tick();
        ~MoveCommand();
        void _reachedPosition();
//      MoveCommand(Player &, AgentCommands::Direction); //TODO: incomplete function definition
    };
}
