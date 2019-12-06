#pragma once

class AgentCommands::CollectCommand : AgentCommands::Command {

public:
    virtual ~CollectCommand();
    virtual void execute(void);
    virtual bool isDone(void);

    void CollectCommand(Player &, int, AgentCommands::CollectCommand::CollectionSpecification);
};
