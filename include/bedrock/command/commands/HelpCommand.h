#pragma once

#include "../Command.h"


class HelpCommand : Command {

public:
    ~HelpCommand(); // _ZN11HelpCommandD2Ev
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK11HelpCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &); // _ZN11HelpCommand5setupER15CommandRegistry
    HelpCommand(); // _ZN11HelpCommandC2Ev
    void getCommandHelp(CommandRegistry const&, CommandOrigin const&, CommandOutput &)const; // _ZNK11HelpCommand14getCommandHelpERK15CommandRegistryRK13CommandOriginR13CommandOutput
    void getHelpPage(CommandRegistry const&, CommandOrigin const&, CommandOutput &)const; // _ZNK11HelpCommand11getHelpPageERK15CommandRegistryRK13CommandOriginR13CommandOutput
};
