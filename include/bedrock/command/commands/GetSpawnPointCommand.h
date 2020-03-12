#pragma once

#include "../Command.h"


class GetSpawnPointCommand : Command {

public:
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    ~GetSpawnPointCommand();
    void setup(CommandRegistry &);
    GetSpawnPointCommand();
};
