#pragma once

#include "../Command.h"


class GetChunkDataCommand : Command {

public:
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    ~GetChunkDataCommand();
    GetChunkDataCommand();
    void setup(CommandRegistry &);
};
