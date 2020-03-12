#pragma once

#include "../origin/CommandOrigin.h"
#include "../CommandRegistry.h"
#include "../Command.h"
#include "../CommandOutput.h"


class ReloadCommand : Command {

public:
    ~ReloadCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    ReloadCommand();
    void setup(CommandRegistry &);
};
