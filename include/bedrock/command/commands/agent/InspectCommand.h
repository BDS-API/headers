#pragma once

#include "../../../actor/Player.h"
#include "../../Command.h"


namespace AgentCommands {

    class InspectCommand : AgentCommands::Command {

    public:
        virtual void fireCommandDoneEvent();
        virtual void execute();
        virtual bool isDone();
        ~InspectCommand();
//      InspectCommand(Player &, AgentCommands::Direction); //TODO: incomplete function definition
    };
}
