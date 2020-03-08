#pragma once

#include "../../../actor/Player"


using namespace AgentCommands;

class TillCommand : AgentCommands::Command {

public:
    virtual void AgentCommands::TillCommand::~TillCommand();
    virtual void execute(void);
    virtual bool isDone(void);

    TillCommand(Player &, std::string, AgentCommands::Direction);
};
