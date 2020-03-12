#pragma once

#include "../Command.h"


class HelpCommand : Command {

public:
    ~HelpCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    void getCommandHelp(CommandRegistry const&, CommandOrigin const&, CommandOutput &)const;
    void setup(CommandRegistry &);
    void getHelpPage(CommandRegistry const&, CommandOrigin const&, CommandOutput &)const;
    HelpCommand();
};
