#pragma once

#include "../../../actor/Player.h"
#include "../../Command.h"


namespace AgentCommands {

class GetItemSpaceCommand : AgentCommands::Command {

public:
    virtual ~GetItemSpaceCommand();
    virtual void execute();
    virtual bool isDone();
    virtual void fireCommandDoneEvent();

    GetItemSpaceCommand(Player &, int, int);
};

}