#pragma once

#include "../origin/CommandOrigin.h"
#include "../CommandRegistry.h"
#include "../Command.h"
#include "../CommandOutput.h"


class SetWorldSpawnCommand : Command {

public:
    ~SetWorldSpawnCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    SetWorldSpawnCommand();
    void setup(CommandRegistry &);
};
