#pragma once

class ClearCommand : Command {

public:
    virtual ~ClearCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    void ClearCommand(void);
};
