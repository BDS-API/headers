#pragma once

class TellCommand : MessagingCommand {

public:
    virtual ~TellCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    void TellCommand(void);
};
