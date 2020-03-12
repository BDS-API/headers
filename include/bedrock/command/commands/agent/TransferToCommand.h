#pragma once

#include "../../Command.h"


namespace AgentCommands {

    class TransferToCommand : AgentCommands::Command {

    public:
        virtual bool isDone();
        ~TransferToCommand();
        virtual void execute();
        TransferToCommand(Player &, int, int, int);
    };
}
