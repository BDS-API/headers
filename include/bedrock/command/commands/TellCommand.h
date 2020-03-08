#pragma once

#include "../CommandRegistry"
#include "../orgin/CommandOrigin"
#include "../CommandOutput"


class TellCommand : MessagingCommand {

public:
    virtual TellCommand::~TellCommand()
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    TellCommand(void);
};
