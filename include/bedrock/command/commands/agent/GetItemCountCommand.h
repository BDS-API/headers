#pragma once

using namespace AgentCommands;

class GetItemCountCommand : AgentCommands::Command {

public:
    virtual void AgentCommands::GetItemCountCommand::~GetItemCountCommand();
    virtual void execute(void);
    virtual bool isDone(void);
    virtual void fireCommandDoneEvent(void);

    GetItemCountCommand(Player &, int);
};
