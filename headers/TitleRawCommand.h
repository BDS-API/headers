#pragma once

class TitleRawCommand : MessagingCommand {

public:
    virtual ~TitleRawCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    void TitleRawCommand(void);
};
