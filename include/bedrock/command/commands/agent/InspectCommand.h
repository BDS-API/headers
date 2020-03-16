#pragma once

#include "../../Command.h"


namespace AgentCommands {

    class InspectCommand : public AgentCommands::Command {

    public:
        virtual ~InspectCommand(); // _ZN13AgentCommands14InspectCommandD2Ev
        virtual void __fake_function0(); // fake
        virtual void execute(); // _ZN13AgentCommands14InspectCommand7executeEv
        virtual bool isDone(); // _ZN13AgentCommands14InspectCommand6isDoneEv
        virtual void fireCommandDoneEvent(); // _ZN13AgentCommands14InspectCommand20fireCommandDoneEventEv
//        InspectCommand(Player &, long); //TODO: incomplete function definition // _ZN13AgentCommands14InspectCommandC2ER6PlayerNS_9DirectionE
    };
}
