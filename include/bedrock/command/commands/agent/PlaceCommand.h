#pragma once

#include "../../Command.h"


namespace AgentCommands {

    class PlaceCommand : public AgentCommands::Command {

    public:
        virtual ~PlaceCommand(); // _ZN13AgentCommands12PlaceCommandD2Ev
        virtual void __fake_function0(); // fake
        virtual void execute(); // _ZN13AgentCommands12PlaceCommand7executeEv
        virtual bool isDone(); // _ZN13AgentCommands12PlaceCommand6isDoneEv
//        PlaceCommand(Player &, ItemStack const&, int, long); //TODO: incomplete function definition // _ZN13AgentCommands12PlaceCommandC2ER6PlayerRK9ItemStackiNS_9DirectionE
    };
}
