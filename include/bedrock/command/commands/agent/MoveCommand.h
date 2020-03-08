#pragma once

#include "../../../actor/Player"


using namespace AgentCommands;

class MoveCommand : AgentCommands::Command {

public:
    virtual void AgentCommands::MoveCommand::~MoveCommand();
    virtual void execute(void);
    virtual bool isDone(void);
    virtual void tick(void);

    MoveCommand(Player &, AgentCommands::Direction);
    void _reachedPosition(void);
};
