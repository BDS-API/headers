#pragma once

class TellRawCommand : MessagingCommand {

public:
    virtual ~TellRawCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    void TellRawCommand(void);
};
