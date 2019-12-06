#pragma once

class GlobalPauseCommand : ServerCommand {

public:
    virtual ~GlobalPauseCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    void GlobalPauseCommand(void);
};
