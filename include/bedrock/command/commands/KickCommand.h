#pragma once

#include "../CommandRegistry"
#include "../orgin/CommandOrigin"


class KickCommand : ServerCommand {

public:
    virtual KickCommand::~KickCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    KickCommand(void);
};
