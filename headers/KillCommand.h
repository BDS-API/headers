#pragma once

class KillCommand : Command {

public:
    virtual ~KillCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    void KillCommand(void);
};
