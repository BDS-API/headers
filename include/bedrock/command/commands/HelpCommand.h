#pragma once

#include "../CommandRegistry.h"
#include "../Command.h"
#include "../orgin/CommandOrigin.h"
#include "../CommandOutput.h"


class HelpCommand : Command {

public:
    virtual ~HelpCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    HelpCommand();
    void getCommandHelp(CommandRegistry const&, CommandOrigin const&, CommandOutput &)const;
    void getHelpPage(CommandRegistry const&, CommandOrigin const&, CommandOutput &)const;
};
