#pragma once

class KickCommand : ServerCommand {

public:
    virtual KickCommand::~KickCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    KickCommand(void);
};
