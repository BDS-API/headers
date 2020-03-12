#pragma once

#include "../Command.h"


class SpawnPointCommand : Command {

public:
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    ~SpawnPointCommand();
    SpawnPointCommand();
    void setup(CommandRegistry &);
};
