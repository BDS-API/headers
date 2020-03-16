#pragma once

#include "../../Command.h"


namespace AgentCommands {

    class CollectCommand : public AgentCommands::Command {

    public:
        virtual ~CollectCommand(); // _ZN13AgentCommands14CollectCommandD2Ev
        virtual void __fake_function0(); // fake
        virtual void execute(); // _ZN13AgentCommands14CollectCommand7executeEv
        virtual bool isDone(); // _ZN13AgentCommands14CollectCommand6isDoneEv
//        CollectCommand(Player &, int, long); //TODO: incomplete function definition // _ZN13AgentCommands14CollectCommandC2ER6PlayeriNS0_23CollectionSpecificationE
    };
}
