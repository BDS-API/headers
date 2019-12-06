#pragma once

class TimeCommand : Command {

public:
    virtual ~TimeCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    void TimeCommand(void);
};
