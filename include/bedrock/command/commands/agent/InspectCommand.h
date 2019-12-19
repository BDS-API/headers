#pragma once

using namespace AgentCommands;

class InspectCommand : AgentCommands::Command {

public:
    virtual void AgentCommands::InspectCommand::~InspectCommand();
    virtual void execute(void);
    virtual bool isDone(void);
    virtual void fireCommandDoneEvent(void);

    InspectCommand(Player &, AgentCommands::Direction);
};
