#pragma once

class AgentCommands::PlaceCommand : AgentCommands::Command {

public:
    virtual ~PlaceCommand();
    virtual void execute(void);
    virtual bool isDone(void);

    void PlaceCommand(Player &, ItemStack const&, int, AgentCommands::Direction);
};
