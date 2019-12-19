#pragma once

class TimeCommand : Command {

public:
    virtual TimeCommand::~TimeCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    TimeCommand(void);
};
