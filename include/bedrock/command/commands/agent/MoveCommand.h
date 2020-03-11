#pragma once

#include "../../../actor/Player.h"
#include "../../Command.h"


namespace AgentCommands {

class MoveCommand : AgentCommands::Command {

public:
    virtual ~MoveCommand();
    virtual void execute();
    virtual bool isDone();
    virtual void tick();

//  MoveCommand(Player &, AgentCommands::Direction); //TODO: incomplete function definition
    void _reachedPosition();
};

}