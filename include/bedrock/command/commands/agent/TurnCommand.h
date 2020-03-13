#pragma once

#include "../../Command.h"


namespace AgentCommands {

    class TurnCommand : AgentCommands::Command {

    public:
        ~TurnCommand(); // _ZN13AgentCommands11TurnCommandD2Ev
        virtual void execute(); // _ZN13AgentCommands11TurnCommand7executeEv
        virtual bool isDone(); // _ZN13AgentCommands11TurnCommand6isDoneEv
        virtual void tick(); // _ZN13AgentCommands11TurnCommand4tickEv
//      TurnCommand(Player &, AgentCommands::Direction); //TODO: incomplete function definition // _ZN13AgentCommands11TurnCommandC2ER6PlayerNS_9DirectionE
    };
}
