#pragma once

#include "../CommandRegistry.h"
#include "../Command.h"
#include "../orgin/CommandOrigin.h"
#include "../CommandOutput.h"


class GetChunksCommand : Command {

public:
    virtual ~GetChunksCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    GetChunksCommand();
};
