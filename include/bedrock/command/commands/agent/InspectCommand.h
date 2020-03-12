#pragma once

#include "../../Command.h"


namespace AgentCommands {

    class InspectCommand : AgentCommands::Command {

    public:
        virtual void fireCommandDoneEvent();
        virtual bool isDone();
        virtual void execute();
        ~InspectCommand();
//      InspectCommand(Player &, AgentCommands::Direction); //TODO: incomplete function definition
    };
}
