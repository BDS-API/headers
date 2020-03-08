#pragma once

#include "../../../actor/Player"


using namespace AgentCommands;

class TransferToCommand : AgentCommands::Command {

public:
    virtual void AgentCommands::TransferToCommand::~TransferToCommand();
    virtual void execute(void);
    virtual bool isDone(void);

    TransferToCommand(Player &, int, int, int);
};
