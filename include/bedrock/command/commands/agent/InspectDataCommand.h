#pragma once

#include "../../Command.h"


namespace AgentCommands {

    class InspectDataCommand : AgentCommands::Command {

    public:
        ~InspectDataCommand(); // _ZN13AgentCommands18InspectDataCommandD2Ev
        virtual void execute(); // _ZN13AgentCommands18InspectDataCommand7executeEv
        virtual bool isDone(); // _ZN13AgentCommands18InspectDataCommand6isDoneEv
        virtual void fireCommandDoneEvent(); // _ZN13AgentCommands18InspectDataCommand20fireCommandDoneEventEv
//      InspectDataCommand(Player &, AgentCommands::Direction); //TODO: incomplete function definition // _ZN13AgentCommands18InspectDataCommandC2ER6PlayerNS_9DirectionE
    };
}
