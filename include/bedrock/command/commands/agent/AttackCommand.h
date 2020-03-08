#pragma once

#include "../../../actor/Player"


using namespace AgentCommands;

class AttackCommand : AgentCommands::Command {

public:
    virtual void AgentCommands::AttackCommand::~AttackCommand();
    virtual void execute(void);
    virtual bool isDone(void);

    AttackCommand(Player &, AgentCommands::Direction);
};
