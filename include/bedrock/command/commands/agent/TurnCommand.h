#pragma once

using namespace AgentCommands;

class TurnCommand : AgentCommands::Command {

public:
    virtual void AgentCommands::TurnCommand::~TurnCommand();
    virtual void execute(void);
    virtual bool isDone(void);
    virtual void tick(void);

    TurnCommand(Player &, AgentCommands::Direction);
};
