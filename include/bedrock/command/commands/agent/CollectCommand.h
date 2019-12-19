#pragma once

using namespace AgentCommands;

class CollectCommand : AgentCommands::Command {

public:
    virtual void AgentCommands::CollectCommand::~CollectCommand();
    virtual void execute(void);
    virtual bool isDone(void);

    CollectCommand(Player &, int, AgentCommands::CollectCommand::CollectionSpecification);
};
