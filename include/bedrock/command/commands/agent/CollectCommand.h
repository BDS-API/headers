#pragma once

#include "../../../actor/Player.h"
#include "../../Command.h"


namespace AgentCommands {

class CollectCommand : AgentCommands::Command {

public:
    virtual ~CollectCommand();
    virtual void execute();
    virtual bool isDone();

//  CollectCommand(Player &, int, AgentCommands::CollectCommand::CollectionSpecification); //TODO: incomplete function definition
};

}