#pragma once

#include "../../../actor/Player.h"
#include "../../../item/ItemStack.h"
#include "../../Command.h"


namespace AgentCommands {

class GetItemDetailsCommand : AgentCommands::Command {

public:
    virtual ~GetItemDetailsCommand();
    virtual void execute();
    virtual bool isDone();
    virtual void fireCommandDoneEvent();

    GetItemDetailsCommand(Player &, ItemStack const&);
};

}