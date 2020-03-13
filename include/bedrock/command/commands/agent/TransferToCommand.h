#pragma once

#include "../../Command.h"


namespace AgentCommands {

    class TransferToCommand : AgentCommands::Command {

    public:
        ~TransferToCommand(); // _ZN13AgentCommands17TransferToCommandD2Ev
        virtual void execute(); // _ZN13AgentCommands17TransferToCommand7executeEv
        virtual bool isDone(); // _ZN13AgentCommands17TransferToCommand6isDoneEv
        TransferToCommand(Player &, int, int, int); // _ZN13AgentCommands17TransferToCommandC2ER6Playeriii
    };
}
