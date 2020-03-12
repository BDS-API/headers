#pragma once

#include "../origin/CommandOrigin.h"
#include "../CommandRegistry.h"
#include "../Command.h"
#include "../CommandOutput.h"


class GetSpawnPointCommand : Command {

public:
    ~GetSpawnPointCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    void setup(CommandRegistry &);
    GetSpawnPointCommand();
};
