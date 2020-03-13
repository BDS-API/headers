#pragma once

#include "../../Command.h"


namespace AgentCommands {

    class GetItemCountCommand : AgentCommands::Command {

    public:
        ~GetItemCountCommand(); // _ZN13AgentCommands19GetItemCountCommandD2Ev
        virtual void execute(); // _ZN13AgentCommands19GetItemCountCommand7executeEv
        virtual bool isDone(); // _ZN13AgentCommands19GetItemCountCommand6isDoneEv
        virtual void fireCommandDoneEvent(); // _ZN13AgentCommands19GetItemCountCommand20fireCommandDoneEventEv
        GetItemCountCommand(Player &, int); // _ZN13AgentCommands19GetItemCountCommandC2ER6Playeri
    };
}
