#pragma once

#include "../../../actor/Player"


using namespace AgentCommands;

class GetItemSpaceCommand : AgentCommands::Command {

public:
    virtual AgentCommands::GetItemSpaceCommand::~GetItemSpaceCommand()
    virtual void execute();
    virtual bool isDone();
    virtual void fireCommandDoneEvent();

    GetItemSpaceCommand(Player &, int, int);
};
