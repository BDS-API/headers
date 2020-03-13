#pragma once

#include "../../Command.h"


namespace AgentCommands {

    class DetectCommand : AgentCommands::Command {

    public:
        ~DetectCommand(); // _ZN13AgentCommands13DetectCommandD2Ev
        virtual void execute(); // _ZN13AgentCommands13DetectCommand7executeEv
        virtual bool isDone(); // _ZN13AgentCommands13DetectCommand6isDoneEv
//      DetectCommand(Player &, AgentCommands::Direction); //TODO: incomplete function definition // _ZN13AgentCommands13DetectCommandC2ER6PlayerNS_9DirectionE
    };
}
