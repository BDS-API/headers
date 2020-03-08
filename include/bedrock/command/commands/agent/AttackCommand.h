#pragma once

#include "../../../actor/Player"


using namespace AgentCommands;

class AttackCommand : AgentCommands::Command {

public:
    virtual AgentCommands::AttackCommand::~AttackCommand()
    virtual void execute();
    virtual bool isDone();

    AttackCommand(Player &, AgentCommands::Direction);
};
