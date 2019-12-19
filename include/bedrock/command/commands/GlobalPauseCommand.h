#pragma once

class GlobalPauseCommand : ServerCommand {

public:
    virtual GlobalPauseCommand::~GlobalPauseCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    GlobalPauseCommand(void);
};
