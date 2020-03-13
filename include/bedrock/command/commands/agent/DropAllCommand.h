#pragma once

#include "../../Command.h"


namespace AgentCommands {

    class DropAllCommand : AgentCommands::Command {

    public:
        ~DropAllCommand(); // _ZN13AgentCommands14DropAllCommandD2Ev
        virtual void execute(); // _ZN13AgentCommands14DropAllCommand7executeEv
        virtual bool isDone(); // _ZN13AgentCommands14DropAllCommand6isDoneEv
//      DropAllCommand(Player &, AgentCommands::Direction); //TODO: incomplete function definition // _ZN13AgentCommands14DropAllCommandC2ER6PlayerNS_9DirectionE
    };
}
