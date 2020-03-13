#pragma once

#include "../../Command.h"


namespace AgentCommands {

    class CollectCommand : AgentCommands::Command {

    public:
        ~CollectCommand(); // _ZN13AgentCommands14CollectCommandD2Ev
        virtual void execute(); // _ZN13AgentCommands14CollectCommand7executeEv
        virtual bool isDone(); // _ZN13AgentCommands14CollectCommand6isDoneEv
//      CollectCommand(Player &, int, AgentCommands::CollectCommand::CollectionSpecification); //TODO: incomplete function definition // _ZN13AgentCommands14CollectCommandC2ER6PlayeriNS0_23CollectionSpecificationE
    };
}
