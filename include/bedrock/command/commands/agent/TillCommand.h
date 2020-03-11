#pragma once

#include "../../../actor/Player.h"
#include "../../Command.h"
#include <string>


namespace AgentCommands {

class TillCommand : AgentCommands::Command {

public:
    virtual ~TillCommand();
    virtual void execute();
    virtual bool isDone();

//  TillCommand(Player &, std::string, AgentCommands::Direction); //TODO: incomplete function definition
};

}