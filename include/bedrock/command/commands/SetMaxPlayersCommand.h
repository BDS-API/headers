#pragma once

#include "../CommandOutput"
#include "../orgin/CommandOrigin"
#include "../CommandRegistry"


class SetMaxPlayersCommand : ServerCommand {

public:
    virtual SetMaxPlayersCommand::~SetMaxPlayersCommand()
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    SetMaxPlayersCommand(void);
};
