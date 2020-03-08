#pragma once

#include "../orgin/CommandOrigin"
#include "../CommandRegistry"


class MeCommand : MessagingCommand {

public:
    virtual MeCommand::~MeCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    MeCommand(void);
};
