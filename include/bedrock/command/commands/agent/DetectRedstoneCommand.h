#pragma once

#include "../../Command.h"


namespace AgentCommands {

    class DetectRedstoneCommand : AgentCommands::Command {

    public:
        ~DetectRedstoneCommand(); // _ZN13AgentCommands21DetectRedstoneCommandD2Ev
        virtual void execute(); // _ZN13AgentCommands21DetectRedstoneCommand7executeEv
        virtual bool isDone(); // _ZN13AgentCommands21DetectRedstoneCommand6isDoneEv
//      DetectRedstoneCommand(Player &, AgentCommands::Direction); //TODO: incomplete function definition // _ZN13AgentCommands21DetectRedstoneCommandC2ER6PlayerNS_9DirectionE
    };
}
