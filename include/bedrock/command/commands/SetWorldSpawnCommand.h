#pragma once

#include "../Command.h"


class SetWorldSpawnCommand : Command {

public:
    ~SetWorldSpawnCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    void setup(CommandRegistry &);
    SetWorldSpawnCommand();
};
