#pragma once

#include "../Command.h"


class GameModeCommand : Command {

public:
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    ~GameModeCommand();
    GameModeCommand();
    void setup(CommandRegistry &);
};
