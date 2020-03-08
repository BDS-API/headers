#pragma once

#include "../../../actor/Player"


using namespace AgentCommands;

class TransferToCommand : AgentCommands::Command {

public:
    virtual AgentCommands::TransferToCommand::~TransferToCommand()
    virtual void execute();
    virtual bool isDone();

    TransferToCommand(Player &, int, int, int);
};
