#pragma once

#include "../../../item/ItemStack.h"
#include "../../../actor/Player.h"
#include "../../Command.h"


namespace AgentCommands {

    class GetItemDetailsCommand : AgentCommands::Command {

    public:
        virtual void execute();
        ~GetItemDetailsCommand();
        virtual void fireCommandDoneEvent();
        virtual bool isDone();
        GetItemDetailsCommand(Player &, ItemStack const&);
    };
}
