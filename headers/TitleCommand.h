#pragma once

class TitleCommand : MessagingCommand {

public:
    virtual ~TitleCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    void TitleCommand(void);
};
