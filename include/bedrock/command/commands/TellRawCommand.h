#pragma once

#include "../orgin/CommandOrigin"
#include "../CommandOutput"
#include "../CommandRegistry"


class TellRawCommand : MessagingCommand {

public:
    TellRawCommand::~TellRawCommand()
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    TellRawCommand(void);
};
