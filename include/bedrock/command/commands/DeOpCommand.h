#pragma once

class DeOpCommand : ServerCommand {

public:
    virtual DeOpCommand::~DeOpCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    DeOpCommand(void);
};
