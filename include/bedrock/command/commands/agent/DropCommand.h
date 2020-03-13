#pragma once

#include "../../Command.h"


namespace AgentCommands {

    class DropCommand : AgentCommands::Command {

    public:
        ~DropCommand(); // _ZN13AgentCommands11DropCommandD2Ev
        virtual void execute(); // _ZN13AgentCommands11DropCommand7executeEv
        virtual bool isDone(); // _ZN13AgentCommands11DropCommand6isDoneEv
//      DropCommand(Player &, int, int, AgentCommands::Direction); //TODO: incomplete function definition // _ZN13AgentCommands11DropCommandC2ER6PlayeriiNS_9DirectionE
    };
}
