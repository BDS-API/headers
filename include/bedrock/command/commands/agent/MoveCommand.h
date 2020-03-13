#pragma once

#include "../../Command.h"


namespace AgentCommands {

    class MoveCommand : AgentCommands::Command {

    public:
        ~MoveCommand(); // _ZN13AgentCommands11MoveCommandD2Ev
        virtual void execute(); // _ZN13AgentCommands11MoveCommand7executeEv
        virtual bool isDone(); // _ZN13AgentCommands11MoveCommand6isDoneEv
        virtual void tick(); // _ZN13AgentCommands11MoveCommand4tickEv
//      MoveCommand(Player &, AgentCommands::Direction); //TODO: incomplete function definition // _ZN13AgentCommands11MoveCommandC2ER6PlayerNS_9DirectionE
        void _reachedPosition(); // _ZN13AgentCommands11MoveCommand16_reachedPositionEv
    };
}
