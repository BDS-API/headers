#pragma once

#include "../../Command.h"


namespace AgentCommands {

    class InspectDataCommand : AgentCommands::Command {

    public:
        virtual void fireCommandDoneEvent();
        ~InspectDataCommand();
        virtual bool isDone();
        virtual void execute();
//      InspectDataCommand(Player &, AgentCommands::Direction); //TODO: incomplete function definition
    };
}
