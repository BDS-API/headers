#pragma once

#include "../../../actor/Player.h"
#include "../../Command.h"


namespace AgentCommands {

    class GetItemCountCommand : AgentCommands::Command {

    public:
        virtual bool isDone();
        ~GetItemCountCommand();
        virtual void execute();
        virtual void fireCommandDoneEvent();
        GetItemCountCommand(Player &, int);
    };
}
