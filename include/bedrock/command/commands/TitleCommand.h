#pragma once

#include "../orgin/CommandOrigin"
#include "../CommandRegistry"


class TitleCommand : MessagingCommand {

public:
    virtual TitleCommand::~TitleCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    TitleCommand(void);
};
