#pragma once

#include "../../../actor/Player.h"
#include "../../Command.h"


namespace AgentCommands {

class DetectRedstoneCommand : AgentCommands::Command {

public:
    virtual ~DetectRedstoneCommand();
    virtual void execute();
    virtual bool isDone();

//  DetectRedstoneCommand(Player &, AgentCommands::Direction); //TODO: incomplete function definition
};

}