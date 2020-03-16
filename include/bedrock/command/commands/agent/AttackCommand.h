#pragma once

#include "../../Command.h"


namespace AgentCommands {

    class AttackCommand : public AgentCommands::Command {

    public:
        virtual ~AttackCommand(); // _ZN13AgentCommands13AttackCommandD2Ev
        virtual void __fake_function0(); // fake
        virtual void execute(); // _ZN13AgentCommands13AttackCommand7executeEv
        virtual bool isDone(); // _ZN13AgentCommands13AttackCommand6isDoneEv
//        AttackCommand(Player &, long); //TODO: incomplete function definition // _ZN13AgentCommands13AttackCommandC2ER6PlayerNS_9DirectionE
    };
}
