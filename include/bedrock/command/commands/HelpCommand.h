#pragma once

#include "../orgin/CommandOrigin"
#include "../CommandOutput"
#include "../Command"
#include "../CommandRegistry"


class HelpCommand : Command {

public:
    HelpCommand::~HelpCommand()
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    HelpCommand(void);
    void getCommandHelp(CommandRegistry const&, CommandOrigin const&, CommandOutput &)const;
    void getHelpPage(CommandRegistry const&, CommandOrigin const&, CommandOutput &)const;
};
