#pragma once

#include "../../Command.h"


namespace AgentCommands {

    class AttackCommand : AgentCommands::Command {

    public:
        ~AttackCommand();
        virtual void execute();
        virtual bool isDone();
//      AttackCommand(Player &, AgentCommands::Direction); //TODO: incomplete function definition
    };
}
