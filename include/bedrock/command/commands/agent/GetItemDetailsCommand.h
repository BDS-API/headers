#pragma once

#include "../../../item/ItemStack"
#include "../../../actor/Player"


using namespace AgentCommands;

class GetItemDetailsCommand : AgentCommands::Command {

public:
    AgentCommands::GetItemDetailsCommand::~GetItemDetailsCommand()
    virtual void execute();
    virtual bool isDone();
    virtual void fireCommandDoneEvent();

    GetItemDetailsCommand(Player &, ItemStack const&);
};
