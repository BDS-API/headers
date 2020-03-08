#pragma once

#include "../../../actor/Player"


using namespace AgentCommands;

class DetectCommand : AgentCommands::Command {

public:
    virtual void AgentCommands::DetectCommand::~DetectCommand();
    virtual void execute(void);
    virtual bool isDone(void);

    DetectCommand(Player &, AgentCommands::Direction);
};
