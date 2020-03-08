#pragma once

#include "../orgin/CommandOrigin"
#include "../CommandOutput"
#include "../Command"
#include "../CommandRegistry"


class GetChunkDataCommand : Command {

public:
    GetChunkDataCommand::~GetChunkDataCommand()
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    GetChunkDataCommand(void);
};
