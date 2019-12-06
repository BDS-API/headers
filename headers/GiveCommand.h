#pragma once

class GiveCommand : Command {

public:
    virtual ~GiveCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    void GiveCommand(void);
};
