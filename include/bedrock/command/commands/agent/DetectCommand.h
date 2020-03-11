#pragma once

#include "../../../actor/Player.h"
#include "../../Command.h"


namespace AgentCommands {

class DetectCommand : AgentCommands::Command {

public:
    virtual ~DetectCommand();
    virtual void execute();
    virtual bool isDone();

//  DetectCommand(Player &, AgentCommands::Direction); //TODO: incomplete function definition
};

}