#pragma once

#include "../CommandRegistry"
#include "../orgin/CommandOrigin"
#include "../CommandOutput"


class MeCommand : MessagingCommand {

public:
    virtual MeCommand::~MeCommand()
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    MeCommand(void);
};
