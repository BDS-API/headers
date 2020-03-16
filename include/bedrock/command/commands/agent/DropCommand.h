#pragma once

#include "../../Command.h"


namespace AgentCommands {

    class DropCommand : public AgentCommands::Command {

    public:
        virtual ~DropCommand(); // _ZN13AgentCommands11DropCommandD2Ev
        virtual void __fake_function0(); // fake
        virtual void execute(); // _ZN13AgentCommands11DropCommand7executeEv
        virtual bool isDone(); // _ZN13AgentCommands11DropCommand6isDoneEv
//        DropCommand(Player &, int, int, long); //TODO: incomplete function definition // _ZN13AgentCommands11DropCommandC2ER6PlayeriiNS_9DirectionE
    };
}
