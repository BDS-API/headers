#pragma once

#include "../../../actor/Player"


using namespace AgentCommands;

class CollectCommand : AgentCommands::Command {

public:
    virtual AgentCommands::CollectCommand::~CollectCommand()
    virtual void execute();
    virtual bool isDone();

    CollectCommand(Player &, int, AgentCommands::CollectCommand::CollectionSpecification);
};
