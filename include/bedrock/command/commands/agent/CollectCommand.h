#pragma once

#include "../../../actor/Player.h"
#include "../../Command.h"


namespace AgentCommands {

    class CollectCommand : AgentCommands::Command {

    public:
        virtual bool isDone();
        virtual void execute();
        ~CollectCommand();
//      CollectCommand(Player &, int, AgentCommands::CollectCommand::CollectionSpecification); //TODO: incomplete function definition
    };
}
