#pragma once

class AgentCommands::GetItemCountCommand : AgentCommands::Command {

public:
    virtual ~GetItemCountCommand();
    virtual void execute(void);
    virtual bool isDone(void);
    virtual void fireCommandDoneEvent(void);

    void GetItemCountCommand(Player &, int);
};
