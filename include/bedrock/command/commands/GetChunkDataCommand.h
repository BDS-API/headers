#pragma once

#include "../CommandRegistry"
#include "../orgin/CommandOrigin"
#include "../CommandOutput"
#include "../Command"


class GetChunkDataCommand : Command {

public:
    virtual GetChunkDataCommand::~GetChunkDataCommand()
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    GetChunkDataCommand(void);
};
