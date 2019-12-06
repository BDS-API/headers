#pragma once

class AgentCommands::GetItemSpaceCommand : AgentCommands::Command {

public:
    virtual ~GetItemSpaceCommand();
    virtual void execute(void);
    virtual bool isDone(void);
    virtual void fireCommandDoneEvent(void);

    void GetItemSpaceCommand(Player &, int, int);
};
