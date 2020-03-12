#pragma once

#include "../origin/CommandOrigin.h"
#include "../CommandRegistry.h"
#include "../Command.h"
#include "../CommandOutput.h"


class GetChunkDataCommand : Command {

public:
    ~GetChunkDataCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    GetChunkDataCommand();
    void setup(CommandRegistry &);
};
