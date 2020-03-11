#pragma once

#include "../../../actor/Player.h"
#include "../../Command.h"


namespace AgentCommands {

class AttackCommand : AgentCommands::Command {

public:
    virtual ~AttackCommand();
    virtual void execute();
    virtual bool isDone();

//  AttackCommand(Player &, AgentCommands::Direction); //TODO: incomplete function definition
};

}