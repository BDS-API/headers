#pragma once

#include "../../../actor/Player"


using namespace AgentCommands;

class TurnCommand : AgentCommands::Command {

public:
    AgentCommands::TurnCommand::~TurnCommand()
    virtual void execute();
    virtual bool isDone();
    virtual void tick();

    TurnCommand(Player &, AgentCommands::Direction);
};
