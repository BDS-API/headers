#pragma once

#include "../../Command.h"


namespace AgentCommands {

    class DestroyCommand : AgentCommands::Command {

    public:
        ~DestroyCommand(); // _ZN13AgentCommands14DestroyCommandD2Ev
        virtual void execute(); // _ZN13AgentCommands14DestroyCommand7executeEv
        virtual bool isDone(); // _ZN13AgentCommands14DestroyCommand6isDoneEv
//      DestroyCommand(Player &, AgentCommands::Direction); //TODO: incomplete function definition // _ZN13AgentCommands14DestroyCommandC2ER6PlayerNS_9DirectionE
    };
}
