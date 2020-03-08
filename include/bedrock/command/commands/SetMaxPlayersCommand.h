#pragma once

#include "../orgin/CommandOrigin"
#include "../CommandOutput"
#include "../CommandRegistry"


class SetMaxPlayersCommand : ServerCommand {

public:
    SetMaxPlayersCommand::~SetMaxPlayersCommand()
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    SetMaxPlayersCommand(void);
};
