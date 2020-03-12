#pragma once

#include "../Command.h"


class GetChunksCommand : Command {

public:
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    ~GetChunksCommand();
    GetChunksCommand();
    void setup(CommandRegistry &);
};
