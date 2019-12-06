#pragma once

class LocateCommand : Command {

public:
    virtual ~LocateCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    void LocateCommand(void);
};
