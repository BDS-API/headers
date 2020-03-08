#pragma once

#include "../../../actor/Player"


using namespace AgentCommands;

class GetItemCountCommand : AgentCommands::Command {

public:
    AgentCommands::GetItemCountCommand::~GetItemCountCommand()
    virtual void execute();
    virtual bool isDone();
    virtual void fireCommandDoneEvent();

    GetItemCountCommand(Player &, int);
};
