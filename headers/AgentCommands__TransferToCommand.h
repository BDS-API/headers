#pragma once

class AgentCommands::TransferToCommand : AgentCommands::Command {

public:
    virtual ~TransferToCommand();
    virtual void execute(void);
    virtual bool isDone(void);

    void TransferToCommand(Player &, int, int, int);
};
