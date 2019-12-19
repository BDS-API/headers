#pragma once

class OpCommand : ServerCommand {

public:
    virtual OpCommand::~OpCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    OpCommand(void);
};
