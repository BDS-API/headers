#pragma once

#include "../../../actor/Player.h"
#include "../../Command.h"


namespace AgentCommands {

    class GetItemSpaceCommand : AgentCommands::Command {

    public:
        ~GetItemSpaceCommand();
        virtual bool isDone();
        virtual void fireCommandDoneEvent();
        virtual void execute();
        GetItemSpaceCommand(Player &, int, int);
    };
}
