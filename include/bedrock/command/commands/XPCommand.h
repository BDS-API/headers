#pragma once

class XPCommand : Command {

public:
    virtual XPCommand::~XPCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    XPCommand(void);
};
