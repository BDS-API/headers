#pragma once

#include "../../Command.h"


namespace AgentCommands {

    class PlaceCommand : AgentCommands::Command {

    public:
        ~PlaceCommand(); // _ZN13AgentCommands12PlaceCommandD2Ev
        virtual void execute(); // _ZN13AgentCommands12PlaceCommand7executeEv
        virtual bool isDone(); // _ZN13AgentCommands12PlaceCommand6isDoneEv
//      PlaceCommand(Player &, ItemStack const&, int, AgentCommands::Direction); //TODO: incomplete function definition // _ZN13AgentCommands12PlaceCommandC2ER6PlayerRK9ItemStackiNS_9DirectionE
    };
}
