#pragma once

#include "../../Command.h"


namespace AgentCommands {

    class InspectCommand : AgentCommands::Command {

    public:
        ~InspectCommand(); // _ZN13AgentCommands14InspectCommandD2Ev
        virtual void execute(); // _ZN13AgentCommands14InspectCommand7executeEv
        virtual bool isDone(); // _ZN13AgentCommands14InspectCommand6isDoneEv
        virtual void fireCommandDoneEvent(); // _ZN13AgentCommands14InspectCommand20fireCommandDoneEventEv
//      InspectCommand(Player &, AgentCommands::Direction); //TODO: incomplete function definition // _ZN13AgentCommands14InspectCommandC2ER6PlayerNS_9DirectionE
    };
}
