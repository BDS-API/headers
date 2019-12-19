#pragma once

using namespace AgentCommands;

class GetItemSpaceCommand : AgentCommands::Command {

public:
    virtual void AgentCommands::GetItemSpaceCommand::~GetItemSpaceCommand();
    virtual void execute(void);
    virtual bool isDone(void);
    virtual void fireCommandDoneEvent(void);

    GetItemSpaceCommand(Player &, int, int);
};
