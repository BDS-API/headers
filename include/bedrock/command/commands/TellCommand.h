#pragma once

#include "../orgin/CommandOrigin"
#include "../CommandRegistry"


class TellCommand : MessagingCommand {

public:
    virtual TellCommand::~TellCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    TellCommand(void);
};
