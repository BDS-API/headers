#pragma once

#include "../../Command.h"


namespace AgentCommands {

    class AttackCommand : AgentCommands::Command {

    public:
        ~AttackCommand(); // _ZN13AgentCommands13AttackCommandD2Ev
        virtual void execute(); // _ZN13AgentCommands13AttackCommand7executeEv
        virtual bool isDone(); // _ZN13AgentCommands13AttackCommand6isDoneEv
//      AttackCommand(Player &, AgentCommands::Direction); //TODO: incomplete function definition // _ZN13AgentCommands13AttackCommandC2ER6PlayerNS_9DirectionE
    };
}
