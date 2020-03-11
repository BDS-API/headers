#pragma once

#include "../../../actor/Player.h"
#include "../../Command.h"


namespace AgentCommands {

class TurnCommand : AgentCommands::Command {

public:
    virtual ~TurnCommand();
    virtual void execute();
    virtual bool isDone();
    virtual void tick();

//  TurnCommand(Player &, AgentCommands::Direction); //TODO: incomplete function definition
};

}