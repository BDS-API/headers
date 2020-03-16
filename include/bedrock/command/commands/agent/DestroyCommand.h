#pragma once

#include "../../Command.h"


namespace AgentCommands {

    class DestroyCommand : public AgentCommands::Command {

    public:
        virtual ~DestroyCommand(); // _ZN13AgentCommands14DestroyCommandD2Ev
        virtual void __fake_function0(); // fake
        virtual void execute(); // _ZN13AgentCommands14DestroyCommand7executeEv
        virtual bool isDone(); // _ZN13AgentCommands14DestroyCommand6isDoneEv
//        DestroyCommand(Player &, long); //TODO: incomplete function definition // _ZN13AgentCommands14DestroyCommandC2ER6PlayerNS_9DirectionE
    };
}
