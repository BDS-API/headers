#pragma once

class HelpCommand : Command {

public:
    virtual ~HelpCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    void HelpCommand(void);
    void getCommandHelp(CommandRegistry const&, CommandOrigin const&, CommandOutput &)const;
    void getHelpPage(CommandRegistry const&, CommandOrigin const&, CommandOutput &)const;
};
