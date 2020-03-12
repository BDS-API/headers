#pragma once

#include "../../../actor/Player.h"
#include "../../Command.h"


namespace AgentCommands {

    class TransferToCommand : AgentCommands::Command {

    public:
        ~TransferToCommand();
        virtual bool isDone();
        virtual void execute();
        TransferToCommand(Player &, int, int, int);
    };
}
