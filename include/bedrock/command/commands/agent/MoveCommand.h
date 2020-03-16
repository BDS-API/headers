#pragma once

#include "../../Command.h"


namespace AgentCommands {

    class MoveCommand : public AgentCommands::Command {

    public:
        virtual ~MoveCommand(); // _ZN13AgentCommands11MoveCommandD2Ev
        virtual void __fake_function0(); // fake
        virtual void execute(); // _ZN13AgentCommands11MoveCommand7executeEv
        virtual bool isDone(); // _ZN13AgentCommands11MoveCommand6isDoneEv
        virtual void tick(); // _ZN13AgentCommands11MoveCommand4tickEv
//        MoveCommand(Player &, long); //TODO: incomplete function definition // _ZN13AgentCommands11MoveCommandC2ER6PlayerNS_9DirectionE
        void _reachedPosition(); // _ZN13AgentCommands11MoveCommand16_reachedPositionEv
    };
}
