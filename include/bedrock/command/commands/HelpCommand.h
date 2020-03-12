#pragma once

#include "../origin/CommandOrigin.h"
#include "../CommandRegistry.h"
#include "../Command.h"
#include "../CommandOutput.h"


class HelpCommand : Command {

public:
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    ~HelpCommand();
    HelpCommand();
    void getCommandHelp(CommandRegistry const&, CommandOrigin const&, CommandOutput &)const;
    void setup(CommandRegistry &);
    void getHelpPage(CommandRegistry const&, CommandOrigin const&, CommandOutput &)const;
};
