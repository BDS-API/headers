#pragma once

#include "../../Command.h"


namespace AgentCommands {

    class GetItemCountCommand : AgentCommands::Command {

    public:
        ~GetItemCountCommand();
        virtual void fireCommandDoneEvent();
        virtual bool isDone();
        virtual void execute();
        GetItemCountCommand(Player &, int);
    };
}
