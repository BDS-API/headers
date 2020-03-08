#pragma once

#include "../../../item/ItemStack"
#include "../../../actor/Player"


using namespace AgentCommands;

class PlaceCommand : AgentCommands::Command {

public:
    AgentCommands::PlaceCommand::~PlaceCommand()
    virtual void execute();
    virtual bool isDone();

    PlaceCommand(Player &, ItemStack const&, int, AgentCommands::Direction);
};
