#pragma once

#include "../origin/CommandOrigin.h"
#include "../CommandRegistry.h"
#include "../Command.h"
#include "../CommandOutput.h"


class SpawnPointCommand : Command {

public:
    ~SpawnPointCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    SpawnPointCommand();
    void setup(CommandRegistry &);
};
