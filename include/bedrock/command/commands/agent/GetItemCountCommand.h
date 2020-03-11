#pragma once

#include "../../../actor/Player.h"
#include "../../Command.h"


namespace AgentCommands {

class GetItemCountCommand : AgentCommands::Command {

public:
    virtual ~GetItemCountCommand();
    virtual void execute();
    virtual bool isDone();
    virtual void fireCommandDoneEvent();

    GetItemCountCommand(Player &, int);
};

}