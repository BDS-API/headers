#pragma once

#include "../Command"
#include "../CommandRegistry"
#include "../orgin/CommandOrigin"


class HelpCommand : Command {

public:
    virtual HelpCommand::~HelpCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    HelpCommand(void);
    void getCommandHelp(CommandRegistry const&, CommandOrigin const&, CommandOutput &)const;
    void getHelpPage(CommandRegistry const&, CommandOrigin const&, CommandOutput &)const;
};
