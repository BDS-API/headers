#pragma once

#include "../../../actor/Player"


using namespace AgentCommands;

class MoveCommand : AgentCommands::Command {

public:
    virtual AgentCommands::MoveCommand::~MoveCommand()
    virtual void execute();
    virtual bool isDone();
    virtual void tick();

    MoveCommand(Player &, AgentCommands::Direction);
    void _reachedPosition();
};
