#pragma once

using namespace AgentCommands;

class GetItemDetailsCommand : AgentCommands::Command {

public:
    virtual void AgentCommands::GetItemDetailsCommand::~GetItemDetailsCommand();
    virtual void execute(void);
    virtual bool isDone(void);
    virtual void fireCommandDoneEvent(void);

    GetItemDetailsCommand(Player &, ItemStack const&);
};
