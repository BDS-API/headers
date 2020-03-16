#pragma once

#include "../../Command.h"


namespace AgentCommands {

    class GetItemDetailsCommand : public AgentCommands::Command {

    public:
        virtual ~GetItemDetailsCommand(); // _ZN13AgentCommands21GetItemDetailsCommandD2Ev
        virtual void __fake_function0(); // fake
        virtual void execute(); // _ZN13AgentCommands21GetItemDetailsCommand7executeEv
        virtual bool isDone(); // _ZN13AgentCommands21GetItemDetailsCommand6isDoneEv
        virtual void fireCommandDoneEvent(); // _ZN13AgentCommands21GetItemDetailsCommand20fireCommandDoneEventEv
        GetItemDetailsCommand(Player &, ItemStack const&); // _ZN13AgentCommands21GetItemDetailsCommandC2ER6PlayerRK9ItemStack
    };
}
