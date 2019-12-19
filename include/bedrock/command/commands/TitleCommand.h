#pragma once

class TitleCommand : MessagingCommand {

public:
    virtual TitleCommand::~TitleCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    TitleCommand(void);
};
