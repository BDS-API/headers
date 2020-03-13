#pragma once

#include "../../Command.h"


namespace AgentCommands {

    class GetItemSpaceCommand : AgentCommands::Command {

    public:
        ~GetItemSpaceCommand(); // _ZN13AgentCommands19GetItemSpaceCommandD2Ev
        virtual void execute(); // _ZN13AgentCommands19GetItemSpaceCommand7executeEv
        virtual bool isDone(); // _ZN13AgentCommands19GetItemSpaceCommand6isDoneEv
        virtual void fireCommandDoneEvent(); // _ZN13AgentCommands19GetItemSpaceCommand20fireCommandDoneEventEv
        GetItemSpaceCommand(Player &, int, int); // _ZN13AgentCommands19GetItemSpaceCommandC2ER6Playerii
    };
}
