#pragma once

#include "../../../actor/Player"


using namespace AgentCommands;

class TillCommand : AgentCommands::Command {

public:
    virtual AgentCommands::TillCommand::~TillCommand()
    virtual void execute();
    virtual bool isDone();

    TillCommand(Player &, std::string, AgentCommands::Direction);
};
