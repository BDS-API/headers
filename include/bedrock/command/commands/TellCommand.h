#pragma once

#include "../orgin/CommandOrigin"
#include "../CommandOutput"
#include "../CommandRegistry"


class TellCommand : MessagingCommand {

public:
    TellCommand::~TellCommand()
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    TellCommand(void);
};
