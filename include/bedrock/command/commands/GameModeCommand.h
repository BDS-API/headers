#pragma once

#include "../origin/CommandOrigin.h"
#include "../CommandRegistry.h"
#include "../Command.h"
#include "../CommandOutput.h"


class GameModeCommand : Command {

public:
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    ~GameModeCommand();
    void setup(CommandRegistry &);
    GameModeCommand();
};
