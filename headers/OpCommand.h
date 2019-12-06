#pragma once

class OpCommand : ServerCommand {

public:
    virtual ~OpCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    void OpCommand(void);
};
