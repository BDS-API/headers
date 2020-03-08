#pragma once

#include "../../../actor/Player"


using namespace AgentCommands;

class GetItemSpaceCommand : AgentCommands::Command {

public:
    AgentCommands::GetItemSpaceCommand::~GetItemSpaceCommand()
    virtual void execute();
    virtual bool isDone();
    virtual void fireCommandDoneEvent();

    GetItemSpaceCommand(Player &, int, int);
};
