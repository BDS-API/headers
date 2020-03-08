#pragma once

#include "../CommandRegistry"
#include "../orgin/CommandOrigin"


class SetMaxPlayersCommand : ServerCommand {

public:
    virtual SetMaxPlayersCommand::~SetMaxPlayersCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    SetMaxPlayersCommand(void);
};
