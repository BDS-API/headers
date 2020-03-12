#pragma once

#include "../../Command.h"


namespace AgentCommands {

    class CollectCommand : AgentCommands::Command {

    public:
        ~CollectCommand();
        virtual void execute();
        virtual bool isDone();
//      CollectCommand(Player &, int, AgentCommands::CollectCommand::CollectionSpecification); //TODO: incomplete function definition
    };
}
