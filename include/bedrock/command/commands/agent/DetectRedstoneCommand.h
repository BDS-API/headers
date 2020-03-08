#pragma once

#include "../../../actor/Player"


using namespace AgentCommands;

class DetectRedstoneCommand : AgentCommands::Command {

public:
    virtual void AgentCommands::DetectRedstoneCommand::~DetectRedstoneCommand();
    virtual void execute(void);
    virtual bool isDone(void);

    DetectRedstoneCommand(Player &, AgentCommands::Direction);
};
