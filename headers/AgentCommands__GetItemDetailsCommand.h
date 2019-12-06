#pragma once

class AgentCommands::GetItemDetailsCommand : AgentCommands::Command {

public:
    virtual ~GetItemDetailsCommand();
    virtual void execute(void);
    virtual bool isDone(void);
    virtual void fireCommandDoneEvent(void);

    void GetItemDetailsCommand(Player &, ItemStack const&);
};
