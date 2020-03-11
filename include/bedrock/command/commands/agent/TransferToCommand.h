#pragma once

#include "../../../actor/Player.h"
#include "../../Command.h"


namespace AgentCommands {

class TransferToCommand : AgentCommands::Command {

public:
    virtual ~TransferToCommand();
    virtual void execute();
    virtual bool isDone();

    TransferToCommand(Player &, int, int, int);
};

}