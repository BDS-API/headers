#pragma once

#include "../../../actor/Player.h"
#include "../../Command.h"


namespace AgentCommands {

    class InspectDataCommand : AgentCommands::Command {

    public:
        virtual void fireCommandDoneEvent();
        virtual void execute();
        ~InspectDataCommand();
        virtual bool isDone();
//      InspectDataCommand(Player &, AgentCommands::Direction); //TODO: incomplete function definition
    };
}
