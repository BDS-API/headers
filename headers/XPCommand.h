#pragma once

class XPCommand : Command {

public:
    virtual ~XPCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    void XPCommand(void);
};
