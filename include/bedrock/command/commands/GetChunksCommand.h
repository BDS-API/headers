#pragma once

#include "../Command"
#include "../CommandRegistry"
#include "../orgin/CommandOrigin"


class GetChunksCommand : Command {

public:
    virtual GetChunksCommand::~GetChunksCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    GetChunksCommand(void);
};
