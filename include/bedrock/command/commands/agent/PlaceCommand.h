#pragma once

using namespace AgentCommands;

class PlaceCommand : AgentCommands::Command {

public:
    virtual void AgentCommands::PlaceCommand::~PlaceCommand();
    virtual void execute(void);
    virtual bool isDone(void);

    PlaceCommand(Player &, ItemStack const&, int, AgentCommands::Direction);
};
