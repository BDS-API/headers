#pragma once

#include "../../../actor/Player"
#include "../../../item/ItemStack"


using namespace AgentCommands;

class PlaceCommand : AgentCommands::Command {

public:
    virtual AgentCommands::PlaceCommand::~PlaceCommand()
    virtual void execute();
    virtual bool isDone();

    PlaceCommand(Player &, ItemStack const&, int, AgentCommands::Direction);
};
