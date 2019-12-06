#pragma once

class SetBlockCommand : Command {

public:
    virtual ~SetBlockCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    void SetBlockCommand(void);
};
