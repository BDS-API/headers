#pragma once

#include "../CommandRegistry"
#include "../orgin/CommandOrigin"
#include "../CommandOutput"


class TitleCommand : MessagingCommand {

public:
    virtual TitleCommand::~TitleCommand()
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    TitleCommand(void);
};
