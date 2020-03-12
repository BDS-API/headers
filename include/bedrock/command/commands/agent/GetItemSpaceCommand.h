#pragma once

#include "../../Command.h"


namespace AgentCommands {

    class GetItemSpaceCommand : AgentCommands::Command {

    public:
        virtual bool isDone();
        virtual void execute();
        virtual void fireCommandDoneEvent();
        ~GetItemSpaceCommand();
        GetItemSpaceCommand(Player &, int, int);
    };
}
