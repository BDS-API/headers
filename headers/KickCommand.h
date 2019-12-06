#pragma once

class KickCommand : ServerCommand {

public:
    virtual ~KickCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    void KickCommand(void);
};
